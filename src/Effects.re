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
    let stars = Webapi.Dom.Document.getElementsByClassName("star", document);

    let blurAmount = getBlurAmount(element);

    let homeStyle = getStyle(homeDiv);

    if (blurAmount > 1.0) {
        Webapi.Dom.CssStyleDeclaration.setProperty("z-index", "-1", "", homeStyle);
    } else {
        Webapi.Dom.CssStyleDeclaration.setProperty("z-index", "1", "", homeStyle);
    };

    let propertyValue = "blur(" ++ Js.Float.toString(blurAmount) ++ "px)";

    let homeStyle = getStyle(homeDiv);
    Webapi.Dom.CssStyleDeclaration.setProperty("filter", propertyValue, "", homeStyle);

    for (i in 0 to Webapi.Dom.HtmlCollection.length(stars) - 1) {
        let star = Webapi.Dom.HtmlCollection.item(i, stars);

        switch star {
        | Some(s) => {
        let style = getStyle(s);
        Webapi.Dom.CssStyleDeclaration.setProperty("filter", propertyValue, "", style);
        }
        | None => Js.log(i); ();
        }
    };
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

    Webapi.Dom.CssStyleDeclaration.setProperty("display", display, "", homeStyle);
};