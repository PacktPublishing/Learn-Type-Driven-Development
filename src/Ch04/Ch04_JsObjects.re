/* src/Ch04/Ch04_JsObjects.re */
let bob = {"id": 1, "name": "Bob"}; /* (1) */

let greet(person) =
  "Hello, " ++
  person##name ++
  " with ID " ++
  string_of_int(person##id); /* (2) */

let jim = {"id": 2, "name": "Jim", "age": 29}; /* (3) */

Js.log(greet(jim));
