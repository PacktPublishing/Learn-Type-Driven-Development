
/* A module */
module ColorExample = { 
  type color = [`Red | `Orange | `Yellow | `Green | `Blue ];
  type rgb = [`Red | `Green | `Blue];

  let onegreen: color = `Green;
  let othergreen: rgb = `Green;

  let stringOfColor = (c: color) : string => {
    switch (c) {
        | `Red => "red"
        | `Orange => "orange"
        | `Yellow => "yellow"
        | `Green => "green"
        | `Blue => "blue"
    }
  };

  let stringOfRgb = (c: rgb) : string => {
    switch (c) {
        | `Red => "RGB red"
        | `Green => "RGB green"
        | `Blue => "RGB blue"
    }
  };
}
