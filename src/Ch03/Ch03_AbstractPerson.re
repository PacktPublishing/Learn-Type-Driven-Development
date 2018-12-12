/* src/Ch03/Ch03_AbstractPerson.re */
type id = int;
type name = string;
type t = {id, name};

let massage(name) = String.trim(String.capitalize(name));
let make(id, name) = {id, name: massage(name)};
let id(t) = t.id;
let name(t) = t.name;
