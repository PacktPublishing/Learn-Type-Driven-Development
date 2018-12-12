/* src/Ch06/Ch06_ReasonList.re */
let people = Ch04_RecordLiterals.[bob, jim, tom]; /* (1) */

let rec greetAll(people) = switch (people) {
| [person, ...people] => { /* (2) */
    Ch06_List.greetOne(person); /* (3) */
    greetAll(people)
  }
| [] => () /* (4) */
};
