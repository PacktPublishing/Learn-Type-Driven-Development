type person = {id: int, name: string};
type company = {id: int, name: string, employees: list(person)};

let bob = {id: 1, name: "Bob"};
let acmeCo = {id: 1, name: "Acme Co.", employees: [bob]};
