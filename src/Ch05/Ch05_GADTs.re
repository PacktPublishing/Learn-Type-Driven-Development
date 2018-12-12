/* src/Ch05/Ch05_GADTs.re */
type poNumber = string;

type paymentMethod =
| Cash: paymentMethod
| PurchaseOrder(poNumber): paymentMethod; /* (1) */

let paymentCash = Cash; /* (2) */

let paymentMessage(paymentMethod) = switch (paymentMethod) {
| Cash => "Paid in cash" /* (3) */
| PurchaseOrder(poNumber) => {j|Paid with PO#$poNumber|j}
};
