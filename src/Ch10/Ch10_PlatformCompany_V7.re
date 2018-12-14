
/* Version 7. Improve using lists as output. */

/* Basic types and functions we need (see .rei file) */

type webapp = {
    name: string,
    url: string,
};

type pfcompany = [ `Facebook(string) 
                    | `Google(string) 
                    | `Twitter(string) 
                    | `Amazon(string) 
                    | `Uber(string) 
                    ];

let appToString = (app: webapp) => app.name ++ " (" ++ app.url ++ ")" ;


/* Data */

let facebook: webapp = {
  name: "facebook",
  url: "https://facebook.com",
}
let facebookads: webapp = {
  name: "facebook ads",
  url: "https://www.facebook.com/business",
}
let messenger: webapp = {
  name: "messenger",
  url: "https://www.facebook.com/messenger",
}
let instagram: webapp = {
  name: "instagram",
  url: "https://www.instagram.com",
}

let google: webapp = {
  name: "google",
  url: "https://google.com",
}
let gmail: webapp = {
  name: "gmail",
  url: "https://google.com/gmail",
}
let googleads: webapp = {
  name: "google ads",
  url: "https://ads.google.com",
}
let googleplus: webapp = {
  name: "google+",
  url: "https://plus.google.com",
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

Js.log("Google")
print_string("Business: ")
Js.log(Array.of_list(Platform.apps(`Google("business"))));
print_string("Social: ")
Js.log(Array.of_list(Platform.apps(`Google("social"))));
