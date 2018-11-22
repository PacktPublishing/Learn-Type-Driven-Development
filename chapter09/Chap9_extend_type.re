
type domain = [ `Domain(string) ];

type accessType = [`Private | `Public];

let accessTypeName = (a: accessType) : string => {
    switch (a) {
        | `Private => "private"
        | `Public => "public"
    }
};

type website = [
    | `CorporateSite(domain) 
    | `CommerceSite(domain, accessType)
    | `Blog(domain, accessType)
];

let siteSummary = (app: website) : string => {
    switch (app) {
        | `CorporateSite(`Domain(s)) => s ++ " - corporate site (public)"
        | `CommerceSite(`Domain(s), a) => s ++ " - commerce site (" ++ accessTypeName(a) ++ ")"
        | `Blog(`Domain(s), a) => {
            switch (a) {
                | `Private => s ++ " - " ++ "corporate blog (" ++ accessTypeName(a) ++ ")"
                | `Public => s ++ " - blog (public - login-based access for authors)"
            }
        }
    }
};

let mysite = `CorporateSite(`Domain("www.acme.com"))
Js.log(siteSummary(mysite))

let myblog = `Blog(`Domain("www.contentgardening.com"), `Public)
Js.log(siteSummary(myblog))

let corpinternalblog = `Blog(`Domain("internalblog.acme.com"), `Private)
Js.log(siteSummary(corpinternalblog))


/* Extension part */

/* the webapp type **/

type webapp = [
    | `CorporateSite(domain) 
    | `CommerceSite(domain, accessType)
    | `Blog(domain, accessType)
    | `SocialApp(domain)
];

/* 1) the extended function **/

let appSummary = (app: webapp) : string => {
    switch (app) {
        | `CorporateSite(`Domain(_)) as ws => siteSummary(ws)
        | `CommerceSite(`Domain(_), _) as ws => siteSummary(ws)
        | `Blog(`Domain(_), _) as ws => siteSummary(ws)
        | `SocialApp(`Domain(s)) => s ++ " - social app"
    }
};

Js.log("---")
let fb = `SocialApp(`Domain("facebook.com"))
Js.log(appSummary(fb))

/* 2) the extended function improved!!! **/

let appSummaryImproved = (app: webapp) : string => {
    switch (app) {
        | #website as ws => siteSummary(ws)
        | `SocialApp(`Domain(s)) => s ++ " - social app"
    }
};

Js.log("------")
Js.log(appSummaryImproved(mysite))
Js.log(appSummaryImproved(myblog))
Js.log(appSummaryImproved(corpinternalblog))
Js.log(appSummaryImproved(fb))


