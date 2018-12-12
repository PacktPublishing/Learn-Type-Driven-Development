let addV1(int1, int2) = int1 + int2; /* (1) */
let addV2 = (int1, int2) => int1 + int2; /* (2) */
let addV3 = int1 => int2 => int1 + int2; /* (3) */

/** A way to convert values of type ['a] to and from floats. */
module FloatConverter = {
  /* (4) */
  type t('a) = {encodeExn: 'a => float, decodeExn: float => 'a};

  /* (5) */
  let float = {encodeExn: float => float, decodeExn: float => float};
  let int = {encodeExn: float_of_int, decodeExn: int_of_float}; /* (6) */
};

let greet = ({Ch03_Domain.Person.id, name}) => /* (7) */
  {j|Hello, $name with ID $id!|j};