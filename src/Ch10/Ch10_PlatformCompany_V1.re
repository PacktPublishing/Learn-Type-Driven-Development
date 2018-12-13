
/* Version 1 */

type internetCompany =
  | Facebook
  | Google
  | Twitter;

let apps = (company: internetCompany) : string => {
  switch (company) {
    | Facebook => "facebook, messenger, ads"
    | Google => "gmail, google+, maps, ads"
    | Twitter => "twitter"
  }
};

let googleApps = apps(Google);
Js.log(googleApps);