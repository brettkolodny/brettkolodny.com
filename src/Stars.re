[@bs.val] external document: Dom.document = "document";
[@bs.val] external setTimeout: (unit => unit, int) => unit = "setTimeout";
[@bs.get] external getStyle: Dom.element => Dom.cssStyleDeclaration = "style";

let makeStars = (numStars, element) => {
    Random.self_init();

    let starColors = [|"rgba(246, 166, 20, 0.5)", "rgba(254, 253, 226, 0.5)", "rgba(232, 85, 129, 0.5)"|];

    // let blurAmonut = 
    // switch (Webapi.Dom.Document.getElementsByTagName("html", document) |> Webapi.Dom.HtmlCollection.item(0)) {
    // | Some(e) => Js.Float.toString(Effects.getBlurAmount(e)) ++ "px"
    // | None => "0px"
    // };

    // let elementStyle = getStyle(element);
    // Webapi.Dom.CssStyleDeclaration.setProperty("--blur", blurAmonut, "", elementStyle);


    let createStar = () => {
        /*
        Get randomized values for the star's initial position, size, transform, and 
        animation duration/delay and then format them into the proper strings.
        */
        let top = ((Random.int(110) - 10) -> string_of_int) ++ "%";
        let left = ((Random.int(110) - 10) -> string_of_int) ++ "%";

        let size = ((Random.int(9) + 10) -> string_of_int) ++ "px";

        let x = ((Random.int(71) + 30) -> string_of_int) ++ "px";
        let y = ((Random.int(71) + 30) -> string_of_int) ++ "px";
        let transformOrigin = x ++ " " ++ y;

        let animationDuration = ((Random.int(15) + 10) -> string_of_int) ++ "s";
        let animationDelay = ((Random.int(8) * -1) -> string_of_int) ++ "s";
        let animation = "orbit " ++ animationDuration ++ " linear " ++ animationDelay ++ " infinite";

        let color = Array.length(starColors) -> Random.int |> Array.get(starColors);

        /*
        Create the star and set the style string created above.
        */
        let star = Webapi.Dom.Document.createElement("div", document);
        Webapi.Dom.Element.setClassName(star, "star");

        let style = getStyle(star);
        Webapi.Dom.CssStyleDeclaration.setProperty("top", top, "", style);
        Webapi.Dom.CssStyleDeclaration.setProperty("left", left, "", style);

        Webapi.Dom.CssStyleDeclaration.setProperty("width", size, "", style);
        Webapi.Dom.CssStyleDeclaration.setProperty("height", size, "", style);

        Webapi.Dom.CssStyleDeclaration.setProperty("transform-origin", transformOrigin, "", style);
        Webapi.Dom.CssStyleDeclaration.setProperty("animation", animation, "", style);

        Webapi.Dom.CssStyleDeclaration.setProperty("background-color", color, "", style);

        Webapi.Dom.Element.appendChild(star, element);
    };

    for (_ in 0 to numStars) {
        setTimeout(createStar, 0);
    };
}