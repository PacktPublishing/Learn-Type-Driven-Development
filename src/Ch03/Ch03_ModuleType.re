/* src/Ch03/Ch03_ModuleType.re */
module type PersonType = {
  type t = {id: int, name: string};
  let make: (int, string) => t;
};

module Person: PersonType = {
  type t = {id: int, name: string};

  let massage(name) = String.trim(String.capitalize(name));
  let make(id, name) = {id, name: massage(name)};
};
