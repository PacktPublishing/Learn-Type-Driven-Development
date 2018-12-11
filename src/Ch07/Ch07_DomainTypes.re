module NonEmptyString: { /* (1) */
  type t = pri string; /* (2) */
  let makeExn: string => t;
} = {
  type t = string;
  let makeExn(string) = { assert(string != ""); string };
};

module PositiveFloat: { /* (3) */
  type t = pri float;
  let makeExn: float => t;
} = {
  type t = float;
  let makeExn(float) = { assert(float > 0.); float };
  let toFloat(t) = t;
};

let sendMoney( /* (4) */
  from: NonEmptyString.t,
  to_: NonEmptyString.t,
  amount: PositiveFloat.t) = {

  let from = (from :> string); /* (5) */
  let to_ = (to_ :> string);
  let amount = (amount :> float);
  Js.log({j|Send \$$amount from $from to $to_|j});
};

sendMoney( /* (6) */
  NonEmptyString.makeExn("Alice"),
  NonEmptyString.makeExn("Bob"),
  PositiveFloat.makeExn(32.));