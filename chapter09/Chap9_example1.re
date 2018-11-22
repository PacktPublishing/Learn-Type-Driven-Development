type color = [`Red | `Orange | `Yellow | `Green | `Blue ];
type rgb = [`Red | `Green | `Blue];

/* Bindings using the variants we defined */
let onegreen: color = `Green;
let othergreen: rgb = `Green;

/* Console log */
Js.log(onegreen);
Js.log(othergreen);

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

Js.log(stringOfColor(onegreen));
Js.log(stringOfRgb(othergreen));

