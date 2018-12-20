/* src/Ch06/Ch06_PhantomTypes.re */

module Sql: {
  type column = string; /* (1) */
  type table = string;
  type t('a); /* (2) */

  let select: list(column) => t([`select]); /* (3) */
  let from: (table, t([`select])) => t([`ok]);
  let print: t([`ok]) => string;
} = {
  type column = string;
  type table = string;
  type t('a) = string;

  let select(columns) = { /* (4) */
    let commalist = String.concat(", ", columns);
    {j|select $commalist|j}
  };

  let from(table, t) = {j|$t from $table|j};
  let print(t) = t; /* (5) */
};

let sql = Sql.(select(["name"]) |> from("employees") |> print); /* (6) */
Js.log(sql);
