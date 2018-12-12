/* src/Ch02/Ch02_Scope.re */
let x = 1;

let y = x + 1;

let z = {
  let result = 0;
  result + x + y
}
