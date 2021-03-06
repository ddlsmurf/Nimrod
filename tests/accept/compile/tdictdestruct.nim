
type
  TDict[TK, TV] = object
    k: TK
    v: TV
  PDict[TK, TV] = ref TDict[TK, TV]

proc fakeNew[T](x: var ref T, destroy: proc (a: ref T)) =
  nil

proc destroyDict[TK, TV](a: PDict[TK, TV]) =
    return
proc newDict[TK, TV](a: TK, b: TV): PDict[TK, TV] =
    Fakenew(result, destroyDict)

# Problem: destroyDict is not instantiated when newDict is instantiated!    

discard newDict("a", "b")    


