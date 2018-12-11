
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

/* Use the module the default way */
Js.log("1/ Use function and values inside the module...");
Js.log(ColorExample.stringOfColor(ColorExample.onegreen));
Js.log(ColorExample.stringOfRgb(ColorExample.othergreen));

/* Open the module and use its content */
Js.log("2/ Use function and values from the module after opening it...");
let colorString = {
  open ColorExample;
  let oneblue: color = `Blue;
  Js.log("String value of another color: " ++ stringOfColor(oneblue));
};
