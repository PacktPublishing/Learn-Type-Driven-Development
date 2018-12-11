module Site = {
    let siteEnvMarker = "TESTING";
    let protocol = (~secured) => secured ? "https" : "http";
    let getInfo = domainName => protocol(~secured=false) ++ "://" ++ domainName ++ " (" ++ siteEnvMarker ++ ")";
};

module ProductionSite = {
    include Site;
    let siteEnvMarker = "production!";
    let getPublicInfo = domainName => {
        let additionalText = " (" ++ String.uppercase(siteEnvMarker) ++ ")";
        let result = protocol(~secured=true) ++ "://" ++ domainName ++ additionalText;
        Js.log(result);
    }
};

Js.log(Site.getInfo("dev-acme.com"));
print_newline();
ProductionSite.getPublicInfo("acme.com");