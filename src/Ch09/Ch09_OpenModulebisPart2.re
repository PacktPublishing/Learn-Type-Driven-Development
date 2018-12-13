
open Ch09_OpenModulebisPart1.ColorExample;

Js.log(stringOfColor(onegreen));
Js.log(stringOfRgb(othergreen));

let colorString = {
  let oneblue: color = `Blue;
  Js.log("String value of another color: " ++ stringOfColor(oneblue));
};
