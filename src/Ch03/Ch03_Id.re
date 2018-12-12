/* src/Ch03/Ch03_Id.re */
module type Id = {
  type t;
  let make: int => t;
  let toInt: t => int;
};

module IntId = {
  type t = int;
  let make(int) = int;
  let toInt(t) = t;
};

module PersonId: Id = IntId;
module CompanyId: Id = IntId;

let bobId = PersonId.make(1);
let acmeCoId = CompanyId.make(1);
/*
let result = bobId == acmeCoId;
*/
