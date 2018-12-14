
/* Version 8. Mutable record. */

/* Basic types and functions we need */

type webapp = {
    name: string,
    url: string,
    mutable numberOfAccounts: int,
};

type pfcompany = [ `Facebook(string) 
                    | `Google(string) 
                    | `Twitter(string) 
                    | `Amazon(string) 
                    | `Uber(string) 
                    ];

let appToString = (app: webapp) => app.name ++ " (" ++ app.url ++ ")" ;

let newSignUp = (app: webapp) : unit => {
  app.numberOfAccounts = app.numberOfAccounts + 1;
  ()
};


/* Data */

let facebook: webapp = {
  name: "facebook",
  url: "https://facebook.com",
  numberOfAccounts: 10000,
}
let facebookads: webapp = {
  name: "facebook ads",
  url: "https://www.facebook.com/business",
  numberOfAccounts: 10000,
}
let messenger: webapp = {
  name: "messenger",
  url: "https://www.facebook.com/messenger",
  numberOfAccounts: 10000,
}
let instagram: webapp = {
  name: "instagram",
  url: "https://www.instagram.com",
  numberOfAccounts: 10000,
}

let google: webapp = {
  name: "google",
  url: "https://google.com",
  numberOfAccounts: 10000,
}
let gmail: webapp = {
  name: "gmail",
  url: "https://google.com/gmail",
  numberOfAccounts: 10000,
}
let googleads: webapp = {
  name: "google ads",
  url: "https://ads.google.com",
  numberOfAccounts: 10000,
}
let googleplus: webapp = {
  name: "google+",
  url: "https://plus.google.com",
  numberOfAccounts: 10000,
}


/* Platform module, signature followed by implementation */

module type PlatformType = {
  let apps: pfcompany => list(string);
};

module Platform: PlatformType = {  
  let apps = (company: pfcompany) : list(string) => {
    switch (company) {
      | `Facebook(str) => switch str {            
          | "social" => [appToString(facebook), appToString(messenger), appToString(instagram)]
          | "business" => [appToString(facebookads),]
      }

      | `Google(str) => switch str {            
          | "social" => [appToString(googleplus),]
          | "business" => [appToString(googleads),]
      }
    }
  };
}

Js.log("Facebook")
print_string("Business: ")
Js.log(Array.of_list(Platform.apps(`Facebook("business"))));
print_string("Social: ")
Js.log(Array.of_list(Platform.apps(`Facebook("social"))));
print_newline();

Js.log("New sign-up on Instagram")
newSignUp(instagram);
Js.log("New sign-up on Instagram")
newSignUp(instagram);
Js.log(instagram.numberOfAccounts)
