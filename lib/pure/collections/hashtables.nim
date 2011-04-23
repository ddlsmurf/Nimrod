#
#
#            Nimrod's Runtime Library
#        (c) Copyright 2011 Andreas Rumpf, Dominik Picheta
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

## The ``hashtables`` module implements an efficient hash table that is
## a mapping from keys to values.

import
  os, hashes, math

type
  TSlotEnum = enum seEmpty, seFilled, seDeleted
  TKeyValuePair[A, B] = tuple[slot: TSlotEnum, key: A, val: B]
  TKeyValuePairSeq[A, B] = seq[TKeyValuePair[A, B]]
  THashTable[A, B] = object of TObject
    data: TKeyValuePairSeq[A, B]
    counter: int

  PHashTable*[A, B] = ref THashTable[A, B] ## use this type to declare tables

proc len*[A, B](t: PHashTable[A, B]): int =
  ## returns the number of keys in `t`.
  result = t.counter

iterator pairs*[A, B](t: PHashTable[A, B]): tuple[key: A, val: B] =
  ## iterates over any (key, value) pair in the table `t`.
  for h in 0..high(t.data):
    if t.data[h].slot == seFilled: yield (t.data[h].key, t.data[h].val)

iterator keys*[A, B](t: PHashTable[A, B]): A =
  ## iterates over any key in the table `t`.
  for h in 0..high(t.data):
    if t.data[h].slot == seFilled: yield t.data[h].key

iterator values*[A, B](t: PHashTable[A, B]): B =
  ## iterates over any value in the table `t`.
  for h in 0..high(t.data):
    if t.data[h].slot == seFilled: yield t.data[h].val

const
  growthFactor = 2

proc mustRehash(length, counter: int): bool {.inline.} =
  assert(length > counter)
  result = (length * 2 < counter * 3) or (length - counter < 4)

proc nextTry(h, maxHash: THash): THash {.inline.} =
  result = ((5 * h) + 1) and maxHash

proc RawGet[A, B](t: PHashTable[A, B], key: A): int =
  var h: THash = hash(key) and high(t.data) # start with real hash value
  while t.data[h].slot != seEmpty:
    if t.data[h].key == key and t.data[h].slot == seFilled:
      return h
    h = nextTry(h, high(t.data))
  result = -1

proc `[]`*[A, B](t: PHashTable[A, B], key: A): B =
  ## retrieves the value at ``t[key]``. If `key` is not in `t`,
  ## default empty value for the type `B` is returned
  ## and no exception is raised. One can check with ``hasKey`` whether the key
  ## exists.
  var index = RawGet(t, key)
  if index >= 0: result = t.data[index].val

proc hasKey*[A, B](t: PHashTable[A, B], key: A): bool =
  ## returns true iff `key` is in the table `t`.
  result = rawGet(t, key) >= 0

proc RawInsert[A, B](t: PHashTable[A, B], data: var TKeyValuePairSeq[A, B],
                     key: A, val: B) =
  var h: THash = hash(key) and high(data)
  while data[h].slot == seFilled:
    h = nextTry(h, high(data))
  data[h].key = key
  data[h].val = val
  data[h].slot = seFilled

proc Enlarge[A, B](t: PHashTable[A, B]) =
  var n: TKeyValuePairSeq[A, B]
  newSeq(n, len(t.data) * growthFactor)
  for i in countup(0, high(t.data)):
    if t.data[i].slot == seFilled: RawInsert(t, n, t.data[i].key, t.data[i].val)
  swap(t.data, n)

proc `[]=`*[A, B](t: PHashTable[A, B], key: A, val: B) =
  ## puts a (key, value)-pair into `t`.
  var index = RawGet(t, key)
  if index >= 0:
    t.data[index].val = val
  else:
    if mustRehash(len(t.data), t.counter): Enlarge(t)
    RawInsert(t, t.data, key, val)
    inc(t.counter)

proc del*[A, B](t: PHashTable[A, B], key: A) =
  ## deletes `key` from hash table `t`.
  var index = RawGet(t, key)
  if index >= 0:
    t.data[index].slot = seDeleted
    dec(t.counter)

proc newHashTable*[A, B](initialSize = 64): PHashTable[A, B] =
  ## creates a new string table that is empty. `initialSize` needs to be
  ## a power of two.
  assert isPowerOfTwo(initialSize)
  new(result)
  result.counter = 0
  newSeq(result.data, initialSize)

proc `$`*[A, B](t: PHashTable[A, B]): string =
  ## The `$` operator for string tables.
  if t.len == 0:
    result = "{:}"
  else:
    result = "{"
    for key, val in pairs(t):
      if result.len > 1: result.add(", ")
      result.add($key)
      result.add(": ")
      result.add($val)
    result.add("}")

# ------------------------------ count tables -------------------------------

const
  deletedCount = -1

type
  TCountTable*[A] {.final.} = object
    data: seq[tuple[key: A, val: int]]
    counter: int

proc len*[A](t: TCountTable[A]): int =
  ## returns the number of keys in `t`.
  result = t.counter

iterator pairs*[A](t: TCountTable[A]): tuple[key: A, val: int] =
  ## iterates over any (key, value) pair in the table `t`.
  for h in 0..high(t.data):
    if t.data[h].slot == seFilled: yield (t.data[h].key, t.data[h].val)

iterator keys*[A](t: TCountTable[A]): A =
  ## iterates over any key in the table `t`.
  for h in 0..high(t.data):
    if t.data[h].slot == seFilled: yield t.data[h].key

iterator values*[A](t: TCountTable[A]): int =
  ## iterates over any value in the table `t`.
  for h in 0..high(t.data):
    if t.data[h].slot == seFilled: yield t.data[h].val

proc RawGet[A](t: TCountTable[A], key: A): int =
  var h: THash = hash(key) and high(t.data) # start with real hash value
  while t.data[h].slot != seEmpty:
    if t.data[h].key == key and t.data[h].slot == seFilled:
      return h
    h = nextTry(h, high(t.data))
  result = -1

proc `[]`*[A](t: TCountTable[A], key: A): B =
  ## retrieves the value at ``t[key]``. If `key` is not in `t`,
  ## default empty value for the type `B` is returned
  ## and no exception is raised. One can check with ``hasKey`` whether the key
  ## exists.
  var index = RawGet(t, key)
  if index >= 0: result = t.data[index].val

proc hasKey*[A](t: TCountTable[A], key: A): bool =
  ## returns true iff `key` is in the table `t`.
  result = rawGet(t, key) >= 0

proc RawInsert[A](t: TCountTable[A], data: var TKeyValuePairSeq[A, B],
                     key: A, val: int) =
  var h: THash = hash(key) and high(data)
  while data[h].slot == seFilled:
    h = nextTry(h, high(data))
  data[h].key = key
  data[h].val = val
  data[h].slot = seFilled

proc Enlarge[A](t: TCountTable[A]) =
  var n: TKeyValuePairSeq[A, B]
  newSeq(n, len(t.data) * growthFactor)
  for i in countup(0, high(t.data)):
    if t.data[i].slot == seFilled: RawInsert(t, n, t.data[i].key, t.data[i].val)
  swap(t.data, n)

proc `[]=`*[A](t: TCountTable[A], key: A, val: int) =
  ## puts a (key, value)-pair into `t`.
  var index = RawGet(t, key)
  if index >= 0:
    t.data[index].val = val
  else:
    if mustRehash(len(t.data), t.counter): Enlarge(t)
    RawInsert(t, t.data, key, val)
    inc(t.counter)

proc del*[A](t: TCountTable[A], key: A) =
  ## deletes `key` from hash table `t`.
  var index = RawGet(t, key)
  if index >= 0:
    t.data[index].slot = seDeleted

proc newHashTable*[A, B](initialSize = 64): PHashTable[A, B] =
  ## creates a new string table that is empty. `initialSize` needs to be
  ## a power of two.
  assert isPowerOfTwo(initialSize)
  new(result)
  result.counter = 0
  newSeq(result.data, initialSize)

proc `$`*[A](t: TCountTable[A]): string =
  ## The `$` operator for string tables.
  if t.len == 0:
    result = "{:}"
  else:
    result = "{"
    for key, val in pairs(t):
      if result.len > 1: result.add(", ")
      result.add($key)
      result.add(": ")
      result.add($val)
    result.add("}")


when isMainModule:
  var table = newHashTable[string, float]()
  table["test"] = 1.2345
  table["111"] = 1.000043
  echo table
  table.del("111")
  echo table
  #echo repr(table["111"])
  #echo(repr(table["1212"]))
  table["111"] = 1.5
  table["011"] = 67.9
  echo table
  table.del("test")
  table.del("111")
  echo table


  echo hash("test")
  echo hash("test")

