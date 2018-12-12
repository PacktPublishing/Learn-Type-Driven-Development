/* src/Ch06/Ch06_Option.re */
let rec tryFind(needle, haystack) = switch (haystack) { /* (1) */
| [item, ..._items] when needle(item) => Some(item) /* (2) */
| [_item, ...items] => tryFind(needle, items) /* (3) */
| [] => None /* (4) */
};

let optionallyGreet(person) = switch (person) { /* (5) */
| Some(person) => Ch06_List.greetOne(person)
| None => print_endline("No such person!")
};

let idEq1({Ch04_RecordLiterals.id}) = id == 1; /* (6) */
let idEq4({Ch04_RecordLiterals.id}) = id == 4;

optionallyGreet(tryFind(idEq1, Ch06_ReasonList.people)); /* (7) */
optionallyGreet(tryFind(idEq4, Ch06_ReasonList.people));
