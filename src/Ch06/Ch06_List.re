/* src/Ch06/Ch06_List.re */
type list('a) = Cons('a, list('a)) | Empty; /* (1) */

/* (2) */
let people = Ch04_RecordLiterals.(Cons(bob, Cons(jim, Cons(tom, Empty))));

/* (3) */
let greetOne({Ch04_RecordLiterals.id, name}) = print_endline(
  {j|Hello, $name with ID $id!|j});

let rec greetAll(people) = switch (people) {
| Cons(person, people) => { /* (4) */
    greetOne(person);
    greetAll(people)
  }
| Empty => () /* (5) */
};
