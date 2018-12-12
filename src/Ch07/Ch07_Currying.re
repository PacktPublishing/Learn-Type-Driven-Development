
let printEnveloppeLabel = (~firstname: string, ~lastname: string, ~address: string, ~country: string)
  : unit => {
    print_newline();
    print_endline(firstname ++ " " ++ lastname);
    print_endline(address);
    print_endline(country);
};

printEnveloppeLabel("John", "Doe", "Some address in the US", "USA");

let printEnveloppeLabelUS = printEnveloppeLabel(~country="USA");
printEnveloppeLabelUS("John", "Doe", "Some address in the US");

let printEnveloppeLabelDoeFamily = printEnveloppeLabelUS(~lastname="Doe", ~address="Some address in the US");
printEnveloppeLabelDoeFamily("Jane");