
/* Version 2 */

type internetCompany =
  | Facebook(string)
  | Google(string)
  | Twitter(string);

let apps = (company: internetCompany) : string => {
  switch (company) {
    | Facebook(str) => switch str {            
        | "social" => "facebook, messenger, instagram"
        | "business" => "facebook ads"
    }
    | Google(str) => switch str {            
        | "social" => "google+, gmail"
        | "business" => "google ads, google adsense, gmail for business"
    }
    | Twitter(str) => switch str {            
        | "social" => "twitter"
        | "business" => "twitter ads"
    }   
  }
};

Js.log(Js.String.toUpperCase("facebook"))
Js.log("Business: " ++ apps(Facebook("business")));
Js.log("Social: " ++ apps(Facebook("social")));

Js.log(Js.String.toUpperCase("google"))
Js.log("Business: " ++ apps(Google("business")));
Js.log("Social: " ++ apps(Google("social")));

