module Person = {
  type t = {id: int, name: string};
  let make(id, name) = {id, name};
};

module Company = {
  type t = {id: int, name: string, employees: list(Person.t)};
};
