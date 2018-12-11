
/* Version 5. Code structure with Modules. */

module WebApp = {
  type t = {
    name: string,
    url: string,
  };

  let toString = (app: t) => app.name ++ " (" ++ app.url ++ ")" ;
}

let facebook: WebApp.t = {
  name: "facebook",
  url: "https://facebook.com",
}
let facebookads: WebApp.t = {
  name: "facebook ads",
  url: "https://www.facebook.com/business",
}
let messenger: WebApp.t = {
  name: "messenger",
  url: "https://www.facebook.com/messenger",
}
let instagram: WebApp.t = {
  name: "instagram",
  url: "https://www.instagram.com",
}

module Platform = {  
  type t = [ `Facebook(string) 
             | `Google(string) 
             | `Twitter(string) 
             | `Amazon(string) 
             | `Uber(string) 
           ];

  let apps = (company: t) : string => {
    switch (company) {
      | `Facebook(str) => switch str {            
          | "social" => WebApp.toString(facebook) ++ ", " ++ WebApp.toString(messenger) ++ ", " ++ WebApp.toString(instagram)
          | "business" => WebApp.toString(facebookads)
      }
    }
  };
}

Js.log(Js.String.toUpperCase("facebook"))
Js.log("Business: " ++ Platform.apps(`Facebook("business")));
Js.log("Social: " ++ Platform.apps(`Facebook("social")));
