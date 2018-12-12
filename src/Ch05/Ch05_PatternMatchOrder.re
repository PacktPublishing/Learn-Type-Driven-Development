/* src/Ch05/Ch05_PatternMatchOrder.re */
type person = Ch04_RecordLiterals.person = {id: int, name: string};

let classifyId(id) = switch (id) {
| 1 | 2 | 3 | 4 | 5 => "Low" /* (1) */
| 6 | 7 | 8 | 9 | 10 => "Medium"
| _ => "High"
};

let greet1(person) = switch (person.id, person.name) { /* (2) */
| (_, "Dave") => "I'm sorry, Dave, I can't let you do that."
| (1, _) => "Hello, boss."
| (id, name) => "Hi, " ++ name ++ " with ID " ++ string_of_int(id) ++ "!"
};

let greet2(person) = switch (person) {
| {name: "Dave"} => "I'm sorry, Dave, I can't let you do that." /* (3) */
| {id: 1} => "Hello, boss."
| {id, name} => "Hi, " ++ name ++ " with ID " ++ string_of_int(id) ++ "!"
};
