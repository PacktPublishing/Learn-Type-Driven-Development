
/* Version 4. We use Records. */

type internetCompany = [ `Facebook(string) | `Google(string) | `Twitter(string) ];
type platformCompany = [ internetCompany | `Amazon(string) | `Uber(string) ];

type webapp = {
  name: string,
  url: string,
};

/* some data */
let facebook = {
  name: "facebook",
  url: "https://facebook.com",
}
let facebookads = {
  name: "facebook ads",
  url: "https://www.facebook.com/business",
}
let messenger = {
  name: "messenger",
  url: "https://www.facebook.com/messenger",
}
let instagram = {
  name: "instagram",
  url: "https://www.instagram.com/",
}

let apps = (company: platformCompany) : string => {
  switch (company) {
    | `Facebook(str) => switch str {            
        | "social" => facebook.name ++ ", " ++ messenger.name ++ ", " ++ instagram.name
        | "business" => facebookads.name
    }

  }
};

Js.log(Js.String.toUpperCase("facebook"));
Js.log("Business: " ++ apps(`Facebook("business")));
Js.log("Social: " ++ apps(`Facebook("social")));
