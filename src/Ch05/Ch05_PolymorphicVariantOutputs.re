/* src/Ch05/Ch05_PolymorphicVariantOutputs.re */
let stringToColour(string) = switch (string) {
| "red" => `red
| "green" => `green
| "blue" => `blue
| _ => `unknown
};
