/* src/Ch05/Ch05_Variants.re */
type education = School | College | Postgrad | Other; /* (1) */

type poNumber = string;
type paymentMethod = Cash | PurchaseOrder(poNumber); /* (2) */

let bobEducation = College; /* (3) */
let bobPaymentMethod = Cash;
let jimEducation = Other;
let jimPaymentMethod = PurchaseOrder("PO-1234"); /* (4) */
