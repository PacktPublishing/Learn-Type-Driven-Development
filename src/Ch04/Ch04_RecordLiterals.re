/* src/Ch04/Ch04_RecordLiterals.re */
type person = {id: int, name: string};

let bob = {name: "Bob", id: 1}; /* (1) */

let jim = { /* (2) */
  let id = 2;
  let name = "Jim";
  {id, name} /* (3) */
};

let tomId = 3;
let tom = {id: tomId, name: "Tom"}; /* (4) */
