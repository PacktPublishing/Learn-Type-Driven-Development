type onlyWomanShoe = [`Sandals | `HighHeels];
type shoe = [onlyWomanShoe | `Moccasins | `Boots | `Sneakers | `Wingtips]

let johndoe_shoe: shoe = `Moccasins;
let janedoe_shoe: shoe = `Sandals;

Js.log(johndoe_shoe);
Js.log(janedoe_shoe);

let infoAboutShoe = (s: shoe) : string => {
    switch (s) {
        | #onlyWomanShoe => "Specific woman shoe such as Sandals or High Heels"
        | `Moccasins => "Moccasins"
        | `Boots => "Boots"
        | `Sneakers => "Sneakers"
        | `Wingtips => "Wingtips"
    }
};

Js.log(infoAboutShoe(johndoe_shoe));
Js.log(infoAboutShoe(janedoe_shoe));

