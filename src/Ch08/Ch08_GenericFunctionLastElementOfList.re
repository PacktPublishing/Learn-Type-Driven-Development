
let rec lastElem = aList =>
  switch aList {
  | [] => None
  | [x] => Some(x)
  | [_, ...l] => lastElem(l)
};

Js.log(lastElem([1, 3, 2, 5, 4]));
Js.log(lastElem(["a", "b", "c", "d"]));
