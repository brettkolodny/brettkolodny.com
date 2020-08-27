[@bs.val] external document: Dom.document = "document";
[@bs.send.pipe: Dom.document] external getElementById: string => Dom.element = "getElementById";
[@bs.get] external getStyle: Dom.element => Dom.cssStyleDeclaration = "style";

let getBlurAmount = element => {
    let pos = element -> Webapi.Dom.Element.scrollTop;
    let maxHeight = element -> Webapi.Dom.Element.scrollHeight -> float_of_int;
    min(pos /. maxHeight *. 10.0, 6.0);
};

let blur = element => {
    let homeDiv = getElementById("home", document);
    let stars = getElementById("stars", document);

    let blurAmount = Js.Float.toString(getBlurAmount(element)) ++ "px";

    let propertyValue = "blur(" ++ blurAmount ++ ")";

    let homeStyle = getStyle(homeDiv);
    Webapi.Dom.CssStyleDeclaration.setProperty("filter", propertyValue, "", homeStyle);

    let starsStyle = getStyle(stars);
    Webapi.Dom.CssStyleDeclaration.setProperty("--blur", blurAmount, "", starsStyle);

};

let getScrollPercent = element => {
    let pos = element -> Webapi.Dom.Element.scrollTop;
    let maxHeight = element -> Webapi.Dom.Element.scrollHeight -> float_of_int;
    pos /. maxHeight *. 100.0;
};

let hideHome = element => {
    let homeDiv = getElementById("home", document);

    let scrollPercent = getScrollPercent(element);

    let display = if (scrollPercent > 50.0) {
        "none";
    } else {
        "flex";
    };

    let homeStyle = getStyle(homeDiv);

    let downStyle = getElementById("down", document) -> getStyle;

    let currentDisplay = Webapi.Dom.CssStyleDeclaration.getPropertyValue("display", homeStyle);
    let currentZIndex = Webapi.Dom.CssStyleDeclaration.getPropertyValue("z-index", homeStyle);

    if (scrollPercent > 10.0 && currentZIndex != "-1") {
        Webapi.Dom.CssStyleDeclaration.setProperty("z-index", "-1", "", homeStyle);
    } else if (scrollPercent <= 10.0 && currentZIndex != "1") {
        Webapi.Dom.CssStyleDeclaration.setProperty("z-index", "1", "", homeStyle);
    };

    if (display != currentDisplay) {
        Webapi.Dom.CssStyleDeclaration.setProperty("display", display, "", homeStyle);
        Webapi.Dom.CssStyleDeclaration.setProperty("display", display, "", downStyle);
    };
};