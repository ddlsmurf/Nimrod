#
#
#            Nimrod's Runtime Library
#        (c) Copyright 2010 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

## This module implements helper procs for SCGI applictions. Example:
## 
## .. code-block:: Nimrod
##
##    import strtabs, sockets, scgi
##
##    var counter = 0
##    proc handleRequest(client: TSocket, input: string, 
##                       headers: PStringTable): bool {.procvar.} =
##      inc(counter)
##      client.writeStatusOkTextContent()
##      client.send("Hello for the $#th time." % $counter & "\c\L")
##      return false # do not stop processing
##
##    run(handleRequest)
##

import sockets, strutils, os, strtabs

type
  EScgi* = object of EIO ## the exception that is raised, if a SCGI error occurs

proc scgiError*(msg: string) {.noreturn.} = 
  ## raises an EScgi exception with message `msg`.
  var e: ref EScgi
  new(e)
  e.msg = msg
  raise e

proc parseWord(inp: string, outp: var string, start: int): int = 
  result = start
  while inp[result] != '\0': inc(result)
  outp = copy(inp, start, result-1)

proc parseHeaders(s: string, L: int): PStringTable = 
  result = newStringTable()
  var i = 0
  while i < L:
    var key, val: string
    i = parseWord(s, key, i)+1
    i = parseWord(s, val, i)+1
    result[key] = val
  if s[i] == ',': inc(i)
  else: scgiError("',' after netstring expected")
  
proc recvChar(s: TSocket): char = 
  var c: char
  if recv(s, addr(c), sizeof(c)) == sizeof(c): 
    result = c
  
type
  TScgiState* {.final.} = object ## SCGI state object
    server: TSocket
    bufLen: int
    client*: TSocket ## the client socket to send data to
    headers*: PStringTable ## the parsed headers
    input*: string  ## the input buffer
    
proc recvBuffer(s: var TScgiState, L: int) =
  if L > s.bufLen: 
    s.bufLen = L
    s.input = newString(L)
  if L > 0 and recv(s.client, cstring(s.input), L) != L: 
    scgiError("could not read all data")
  setLen(s.input, L)
  
proc open*(s: var TScgiState, port = TPort(4000)) = 
  ## opens a connection.
  s.bufLen = 4000
  s.input = newString(s.buflen) # will be reused
  
  s.server = socket()
  if s.server == InvalidSocket: scgiError("could not open socket")
  #s.server.connect(connectionName, port)
  bindAddr(s.server, port)
  listen(s.server)
  
proc close*(s: var TScgiState) = 
  ## closes the connection.
  s.server.close()

proc next*(s: var TScgistate) = 
  ## proceed to the first/next request.
  s.client = accept(s.server)
  var L = 0
  while true:
    var d = s.client.recvChar()
    if d notin strutils.digits: 
      if d != ':': scgiError("':' after length expected")
      break
    L = L * 10 + ord(d) - ord('0')  
  recvBuffer(s, L+1)
  s.headers = parseHeaders(s.input, L)
  if s.headers["SCGI"] != "1": scgiError("SCGI Version 1 expected")
  L = parseInt(s.headers["CONTENT_LENGTH"])
  recvBuffer(s, L)
  
proc writeStatusOkTextContent*(c: TSocket) = 
  ## sends the following string to the socket `c`::
  ##
  ##   Status: 200 OK\r\LContent-Type: text/plain\r\L\r\L
  ##
  ## You should send this before sending your HTML page, for example.
  c.send("Status: 200 OK\r\L" &
         "Content-Type: text/plain\r\L\r\L")

proc run*(handleRequest: proc (client: TSocket, input: string, 
                               headers: PStringTable): bool,
          port = TPort(4000)) = 
  ## encapsulates the SCGI object and main loop.
  var s: TScgiState
  s.open(port)
  var stop = false
  while not stop:
    next(s)
    stop = handleRequest(s.client, s.input, s.headers)
    s.client.close()
  s.close()

when isMainModule:
  var counter = 0
  proc handleRequest(client: TSocket, input: string, 
                     headers: PStringTable): bool {.procvar.} =
    inc(counter)
    client.writeStatusOkTextContent()
    client.send("Hello for the $#th time." % $counter & "\c\L")
    return false # do not stop processing

  run(handleRequest)

