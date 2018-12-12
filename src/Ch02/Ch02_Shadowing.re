/* src/Ch02/Ch02_Shadowing.re */
let name = "Bob";
let age = "33";

let greeting = {
  let age = "34";
  "Hello, " ++ name ++ " aged " ++ age;
};

let name = "Jim";
let greeting2 = "Hello, " ++ name ++ " aged " ++ age;
