/* src/Ch05/Ch05_PolymorphicVariantInputs.re */
let eventToString(event) = switch (event) {
| `clickTap(x, y) => {j|`clickTap($x, $y)|j} /* (1), (2) */
| `keypress(char) => {j|`keypress($char)|j}
| `pointerMove(x1, y1, x2, y2) => {j|`pointerMove($x1, $y1, $x2, $y2)|j}
| `deviceShake(times) => {j|`deviceShake($times)|j}
| `accel(mssq) => {j|`accel($mssq)|j}
};

/* (3) */
let pressAString = eventToString(Ch05_PolymorphicVariantBasics.pressA);

/* (4) */
let `degrees(angleVal) = Ch05_PolymorphicVariantBasics.angle;
