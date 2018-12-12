/* src/Ch05/Ch05_PatternMatching.re */
type paymentMethod = Ch05_Variants.paymentMethod = /* (1) */
| Cash
| PurchaseOrder(Ch05_Variants.poNumber);

let paymentMethodThanks(paymentMethod) = switch (paymentMethod) { /* (2) */
| Cash => "Thank you for your cash payment"
| PurchaseOrder(poNumber) =>
  "Thank you for your purchase order # " ++ poNumber
};
