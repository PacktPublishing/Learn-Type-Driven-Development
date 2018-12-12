module type Comparable = {
  type t;
  let equal: (t, t) => bool;
};

module MakeSet = (Item: Comparable) => {
  /* let's use a list as our naive backing data structure */
  type backingType = list(Item.t);
  let empty = [];
  let add = (currentSet: backingType, newItem: Item.t) : backingType =>
    /* if item exists */
    if (List.exists((x) => Item.equal(x, newItem), currentSet)) {
      currentSet /* return the same (immutable) set (a list really) */
    } else {
      [
        newItem,
        ...currentSet /* prepend to the set and return it */
      ]
    };
};

module IntPair = {
  type t = (int, int);
  let equal = ((x1, y1), (x2, y2)) => x1 == x2 && y1 == y2;
  let create = (x, y) => (x, y);
};

module SetOfIntPairs = MakeSet(IntPair);

/* Use the resulting module */
let aSetOfPairItems: SetOfIntPairs.backingType = SetOfIntPairs.empty;
Js.log(aSetOfPairItems);
let otherSetOfPairItems = SetOfIntPairs.add(aSetOfPairItems, (1, 2));
Js.log(otherSetOfPairItems);
let thirdSetOfPairItems = SetOfIntPairs.add(otherSetOfPairItems, (2, 3));
Js.log(thirdSetOfPairItems);

