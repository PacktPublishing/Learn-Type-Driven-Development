/* src/Ch06/Ch06_Array.re */
let empty = [||]; /* (1) */
let singleton = [|1|];
let multi = [|false, true, true|];

multi[1] = false; /* (2) */
Js.log(multi[1]); /* (3) */
