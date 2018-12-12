/* src/Ch05/Ch05_PolymorphicVariantBasics.re */
let colour = `Red; /* (1) */
let angle = `degrees(45.0); /* (2) */

type event = [ /* (3) */
| `clickTap(int, int) /* x, y */
| `keypress(char)
| `pointerMove(int, int, int, int) /* x1, y1, x2, y2 */
];

type mobileEvent = [
| event /* (4) */
| `deviceShake(int) /* how many times */
| `accel(float) /* m/s^2 */
];

let pressA: mobileEvent = `keypress('a'); /* (5) */
/* let shakeThrice: event = `deviceShake(3); /* (6) */ */
