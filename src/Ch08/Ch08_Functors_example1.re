module IntSet =
  Set.Make(
    {
      let compare = Pervasives.compare;
      type t = int;
    }
);

let myIntSet = IntSet.of_list([1,2,3]);
Js.log(myIntSet)
