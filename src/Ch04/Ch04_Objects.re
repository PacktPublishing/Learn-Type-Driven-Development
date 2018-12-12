/* src/Ch04/Ch04_Objects.re */
let bob = {as _; pub id = 1; pub name = "Bob"}; /* (1), (2) */

let greet(person) =
  "Hello, " ++
  person#name ++
  " with ID " ++
  string_of_int(person#id); /* (3) */

let jim = {
  pub id = 2;
  pub name = "Jim";
  pub sayHi = "Hi, my name is " ++ this#name /* (4) */
};

Js.log(greet(jim)); /* (5) */
/*Js.log(greet({as _; pub name = "Tom"}));*/