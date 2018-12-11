
module type PrintableType = {
  type t;
  let print: t => string;
};

module type PrintablePair = (First: PrintableType, Second: PrintableType) => {
  type t;
  let make: (First.t, Second.t) => t;
  let print: (t) => string;
};

module Make: PrintablePair = (First: PrintableType, Second: PrintableType) => {
  type t = (First.t, Second.t);
  let make = (f: First.t, s: Second.t) => (f, s);
  let print = ((f, s): t) => 
    "(" ++ First.print(f) ++ ", " ++ Second.print(s) ++ ")";
};


module PrintableString = {
  type t=string;
  let print = (s: t) => s;
};

module PrintableInt = {
  type t=int;
  let print = (i: t) => string_of_int(i);
};

module PrintableSI = Make(PrintableString, PrintableInt);

let () = PrintableSI.({
  let pair = make("Jane", 53);
  let str = print(pair);
  print_string(str);
});