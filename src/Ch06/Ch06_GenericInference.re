/* src/Ch06/Ch06_GenericInference.re */
let triple(x) = (x, x, x); /* (1) */
let wrap(x) = `wrap(x); /* (2) */
let makeObj(x) = {as _; pub x = x}; /* (3) */
let greet(x) = print_endline({j|Hello, $x!|j}); /* (4) */
