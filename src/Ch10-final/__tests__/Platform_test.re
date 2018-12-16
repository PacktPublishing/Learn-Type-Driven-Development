open Jest;

describe("Platform", () => {
  open Expect;
  open Ch10_PlatformCompany;

  test("list facebook business app", () => {
    let facebook_biz = Platform.apps(`Facebook("business"));
    expect(facebook_biz) |> toEqual([ "facebook ads (https://www.facebook.com/business)" ]);
  });
    
  test("instagram number of accounts", () => {
    let nb = instagram.numberOfAccounts;
    newSignUp(instagram);
    expect(instagram.numberOfAccounts) |> toEqual(nb + 1);
  });
});