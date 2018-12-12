/* src/Ch05/Ch05_Branching.re */
type education = Ch05_Variants.education = /* (1) */
| School
| College
| Postgrad
| Other;

type paymentMethod = Ch05_Variants.paymentMethod =
| Cash
| PurchaseOrder(Ch05_Variants.poNumber);

/** Returns purchase order IDs that start with 'ACME', otherwise
    nothing. */
let getAcmeOrder(paymentMethod) = switch (paymentMethod) {
| PurchaseOrder(poNumber)
  /* (2),                                      (3) */
  when String.sub(poNumber, 0, 4) == "ACME" => Some(poNumber)
| _ => None /* (4) */
};

let decidePaymentMethod(orderTotal, orderId) =
  if (orderTotal <= 50.0) Cash /* (5) */
  else PurchaseOrder("PO-" ++ orderId);
