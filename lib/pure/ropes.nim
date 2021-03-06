#
#
#            Nimrod's Runtime Library
#        (c) Copyright 2010 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

## This module contains support for a `rope`:idx: data type.
## Ropes can represent very long strings efficiently; especially concatenation
## is done in O(1) instead of O(n). They are essentially concatenation
## trees that are only flattened when converting to a native Nimrod
## string. The empty string is represented by ``nil``. Ropes are immutable and
## subtrees can be shared without copying.
## Leaves can be cached for better memory efficiency at the cost of
## runtime efficiency.

include "system/inclrtl"

{.deadCodeElim: on.}

{.push debugger:off .} # the user does not want to trace a part
                       # of the standard library!

const
  countCacheMisses = false

var
  cacheEnabled = false

type 
  PRope* = ref TRope ## empty rope is represented by nil
  TRope {.acyclic, final, pure.} = object
    left, right: PRope
    length: int
    data: string # != nil if a leaf

proc isConc(r: PRope): bool {.inline.} = return isNil(r.data)

# Note that the left and right pointers are not needed for leafs.
# Leaves have relatively high memory overhead (~30 bytes on a 32
# bit machine) and we produce many of them. This is why we cache and
# share leafs accross different rope trees.
# To cache them they are inserted in another tree, a splay tree for best
# performance. But for the caching tree we use the leaf's left and right
# pointers.

proc len*(a: PRope): int {.rtl, extern: "nro$1".} =
  ## the rope's length
  if a == nil: result = 0
  else: result = a.length
  
proc newRope(): PRope = new(result)
proc newRope(data: string): PRope = 
  new(result)
  result.length = len(data)
  result.data = data

var 
  cache: PRope                # the root of the cache tree
  N: PRope                    # dummy rope needed for splay algorithm

when countCacheMisses:
  var misses, hits: int
  
proc splay(s: string, tree: PRope, cmpres: var int): PRope = 
  var c: int
  var t = tree
  N.left = nil
  N.right = nil               # reset to nil
  var le = N
  var r = N
  while true: 
    c = cmp(s, t.data)
    if c < 0: 
      if (t.left != nil) and (s < t.left.data): 
        var y = t.left
        t.left = y.right
        y.right = t
        t = y
      if t.left == nil: break 
      r.left = t
      r = t
      t = t.left
    elif c > 0: 
      if (t.right != nil) and (s > t.right.data): 
        var y = t.right
        t.right = y.left
        y.left = t
        t = y
      if t.right == nil: break 
      le.right = t
      le = t
      t = t.right
    else: 
      break 
  cmpres = c
  le.right = t.left
  r.left = t.right
  t.left = N.right
  t.right = N.left
  result = t

proc insertInCache(s: string, tree: PRope): PRope = 
  var t = tree
  if t == nil: 
    result = newRope(s)
    when countCacheMisses: inc(misses)
    return 
  var cmp: int
  t = splay(s, t, cmp)
  if cmp == 0: 
    # We get here if it's already in the Tree
    # Don't add it again
    result = t
    when countCacheMisses: inc(hits)
  else: 
    when countCacheMisses: inc(misses)
    result = newRope(s)
    if cmp < 0: 
      result.left = t.left
      result.right = t
      t.left = nil
    else: 
      # i > t.item:
      result.right = t.right
      result.left = t
      t.right = nil

proc rope*(s: string): PRope {.rtl, extern: "nro$1Str".} =
  ## Converts a string to a rope. 
  if s.len == 0: 
    result = nil
  elif cacheEnabled: 
    result = insertInCache(s, cache)
    cache = result
  else: 
    result = newRope(s)
  
proc rope*(i: BiggestInt): PRope {.rtl, extern: "nro$1BiggestInt".} = 
  ## Converts an int to a rope. 
  result = rope($i)

proc rope*(f: BiggestFloat): PRope {.rtl, extern: "nro$1BiggestFloat".} =
  ## Converts a float to a rope. 
  result = rope($f)

proc disableCache*() {.rtl, extern: "nro$1".} =
  ## the cache is discarded and disabled. The GC will reuse its used memory.
  cache = nil
  cacheEnabled = false
  
proc enableCache*() {.rtl, extern: "nro$1".} =
  ## Enables the caching of leaves. This reduces the memory footprint at
  ## the cost of runtime efficiency.
  cacheEnabled = true

proc `&`*(a, b: PRope): PRope {.rtl, extern: "nroConcRopeRope".} =
  ## the concatenation operator for ropes.
  if a == nil: 
    result = b
  elif b == nil: 
    result = a
  else:
    result = newRope()
    result.length = a.length + b.length
    when false:
      # XXX rebalancing would be nice, but is too expensive.
      result.left = a.left
      var x = newRope()
      x.left = a.right
      x.right = b
      result.right = x
    else:
      result.left = a
      result.right = b
  
proc `&`*(a: PRope, b: string): PRope {.rtl, extern: "nroConcRopeStr".} = 
  ## the concatenation operator for ropes.
  result = a & rope(b)
  
proc `&`*(a: string, b: PRope): PRope {.rtl, extern: "nroConcStrRope".} = 
  ## the concatenation operator for ropes.
  result = rope(a) & b
  
proc `&`*(a: openarray[PRope]): PRope {.rtl, extern: "nroConcOpenArray".} = 
  ## the concatenation operator for an openarray of ropes.
  for i in countup(0, high(a)): result = result & a[i]

proc add*(a: var PRope, b: PRope) {.rtl, extern: "nro$1Rope".} =
  ## adds `b` to the rope `a`.
  a = a & b

proc add*(a: var PRope, b: string) {.rtl, extern: "nro$1Str".} =
  ## adds `b` to the rope `a`.
  a = a & b
  
proc `[]`*(r: PRope, i: int): char {.rtl, extern: "nroCharAt".} =
  ## returns the character at position `i` in the rope `r`. This is quite
  ## expensive! Worst-case: O(n). If ``i >= r.len``, ``\0`` is returned.
  var x = r
  var j = i
  if x == nil: return
  while true:
    if not isConc(x):
      if x.data.len <% j: return x.data[j]
      return '\0'
    else:
      if x.left.len >% j:
        x = x.left
      else:
        x = x.right
        dec(j, x.len)

iterator leaves*(r: PRope): string =
  ## iterates over any leaf string in the rope `r`.
  if r != nil:
    var stack = @[r]
    while stack.len > 0: 
      var it = stack.pop
      while isConc(it):
        stack.add(it.right)
        it = it.left
        assert(it != nil)
      assert(it.data != nil)
      yield it.data
  
iterator items*(r: PRope): char =
  ## iterates over any character in the rope `r`.
  for s in leaves(r):
    for c in items(s): yield c

proc write*(f: TFile, r: PRope) {.rtl, extern: "nro$1".} =
  ## writes a rope to a file.
  for s in leaves(r): write(f, s)

proc `$`*(r: PRope): string  {.rtl, extern: "nroToString".}= 
  ## converts a rope back to a string.
  result = newString(r.len)
  setLen(result, 0)
  for s in leaves(r): add(result, s)

when false:
  # Format string caching seems reasonable: All leaves can be shared and format
  # string parsing has to be done only once. A compiled format string is stored
  # as a rope. A negative length is used for the index into the args array.
  proc compiledArg(idx: int): PRope =
    new(result)
    result.length = -idx
  
  proc compileFrmt(frmt: string): PRope = 
    var i = 0
    var length = len(frmt)
    result = nil
    var num = 0
    while i < length: 
      if frmt[i] == '$': 
        inc(i)
        case frmt[i]
        of '$': 
          add(result, "$")
          inc(i)
        of '#': 
          inc(i)
          add(result, compiledArg(num+1))
          inc(num)
        of '0'..'9': 
          var j = 0
          while true: 
            j = j * 10 + ord(frmt[i]) - ord('0')
            inc(i)
            if frmt[i] notin {'0'..'9'}: break 
          add(s, compiledArg(j))
        of '{':
          inc(i)
          var j = 0
          while frmt[i] in {'0'..'9'}:
            j = j * 10 + ord(frmt[i]) - ord('0')
            inc(i)
          if frmt[i] == '}': inc(i)
          else: raise newException(EInvalidValue, "invalid format string")
          add(s, compiledArg(j))
        else: raise newException(EInvalidValue, "invalid format string")
      var start = i
      while i < length: 
        if frmt[i] != '$': inc(i)
        else: break 
      if i - 1 >= start: 
        add(result, copy(frmt, start, i-1))
  
proc `%`*(frmt: string, args: openarray[PRope]): PRope {. 
  rtl, extern: "nroFormat".} =
  ## `%` substitution operator for ropes. Does not support the ``$identifier``
  ## nor ``${identifier}`` notations.
  var i = 0
  var length = len(frmt)
  result = nil
  var num = 0
  while i < length: 
    if frmt[i] == '$': 
      inc(i)
      case frmt[i]
      of '$': 
        add(result, "$")
        inc(i)
      of '#': 
        inc(i)
        add(result, args[num])
        inc(num)
      of '0'..'9': 
        var j = 0
        while true: 
          j = j * 10 + ord(frmt[i]) - ord('0')
          inc(i)
          if frmt[i] notin {'0'..'9'}: break 
        add(result, args[j-1])
      of '{':
        inc(i)
        var j = 0
        while frmt[i] in {'0'..'9'}:
          j = j * 10 + ord(frmt[i]) - ord('0')
          inc(i)
        if frmt[i] == '}': inc(i)
        else: raise newException(EInvalidValue, "invalid format string")
        add(result, args[j-1])
      else: raise newException(EInvalidValue, "invalid format string")
    var start = i
    while i < length: 
      if frmt[i] != '$': inc(i)
      else: break 
    if i - 1 >= start: 
      add(result, copy(frmt, start, i - 1))

proc addf*(c: var PRope, frmt: string, args: openarray[PRope]) {.
  rtl, extern: "nro$1".} =
  ## shortcut for ``add(c, frmt % args)``.
  add(c, frmt % args)

proc equalsFile*(r: PRope, f: TFile): bool {.rtl, extern: "nro$1File".} =
  ## returns true if the contents of the file `f` equal `r`.
  var bufSize = 1024 # reasonable start value
  var buf = alloc(BufSize)
  for s in leaves(r):
    if s.len > bufSize:
      bufSize = max(bufSize * 2, s.len)
      buf = realloc(buf, bufSize)
    var readBytes = readBuffer(f, buf, s.len)
    result = readBytes == s.len and equalMem(buf, cstring(s), s.len)
    if not result: break
  if result:
    result = readBuffer(f, buf, 1) == 0 # really at the end of file?
  dealloc(buf)

proc equalsFile*(r: PRope, f: string): bool {.rtl, extern: "nro$1Str".} =
  ## returns true if the contents of the file `f` equal `r`. If `f` does not
  ## exist, false is returned.
  var bin: TFile
  result = open(bin, f)
  if result:
    result = equalsFile(r, bin)
    close(bin)

new(N) # init dummy node for splay algorithm

{.pop.}
