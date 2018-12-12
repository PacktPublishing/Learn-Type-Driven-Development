/* src/Ch04/Ch04_RecordPatterns.re */
open Ch04_RecordLiterals; /* (1) */

let {id: bobId, name: bobName} = bob; /* (2) */
let {id, name: jimName} = jim; /* (3) */
let {id: tomId, name: _} = tom; /* (4) */
let {name, _} = tom; /* (5) */
let {name: tomName} = tom; /* (6) */
