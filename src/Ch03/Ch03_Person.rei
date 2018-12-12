/** src/Ch03/Ch03_Person.rei */

module Name: {
  type t;
  let make: string => t;
  let toString: t => string;
};

type id = int;
type t = {id, name: Name.t};

let make: (id, Name.t) => t;
let id: t => id;
let name: t => Name.t;
