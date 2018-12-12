/* src/Ch04/Ch04_RecordUpdates.re */
let bob = Ch04_RecordLiterals.bob;
let bobLongForm1 = {...bob, name: "Robert"};
let bobLongForm2 = {Ch04_RecordLiterals.id: bob.id, name: "Robert"};
