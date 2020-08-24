[@bs.val] external document: Dom.document = "document";
[@bs.val] external setTimeout: (unit => unit, int) => unit = "setTimeout";
[@bs.val] external addEventListener: (string, (Js.t({..}) => unit)) => unit = "addEventListener";

type styleAttribute = {
    name: string,
    value: string,
}

let createStyleString = attributes => {
    let formatAttribute = (attr) => {
        attr.name ++ ":" ++ attr.value ++ ";"
    };

    let rec create = (attr, final) => {
        switch attr {
        | [hd, ... tl] => create(tl, final ++ formatAttribute(hd))
        | [] => final
        };
    };

    create(attributes, "")
}

let makeStars = (numStars, element) => {
    let blur = (e) => {
        let pos = e##target##scrollingElement##scrollTop;
        let max = e##target##scrollingElement##scrollHeight;

        let blurAmount = pos /. max *. 10.0;

        if (blurAmount < 6.0) {
            element##style #= ("filter: " ++ "blur(" ++ Js.Float.toString(blurAmount) ++ "px)");
        } else {
            element##style #= ("filter: blur(6px)");
        };
    };

    addEventListener("scroll", blur);

    Random.self_init();
    let starColors = [|"#f6a614", "#fefde2", "#e85581"|];
    let createStar = () => {
        /*
        Get randomized values for the star's initial position, size, transform, and 
        animation duration/delay and then format them into the proper strings.
        */
        let top = ((Random.int(125) - 25) -> string_of_int) ++ "%";
        let left = ((Random.int(150) - 50) -> string_of_int) ++ "%";

        let size = ((Random.int(9) + 10) -> string_of_int) ++ "px";

        let x = ((Random.int(71) + 30) -> string_of_int) ++ "px";
        let y = ((Random.int(71) + 30) -> string_of_int) ++ "px";
        let transformOrigin = x ++ " " ++ y;

        let animationDuration = ((Random.int(15) + 10) -> string_of_int) ++ "s";
        let animationDelay = ((Random.int(8) * -1) -> string_of_int) ++ "s";

        let color = Array.length(starColors) -> Random.int |> Array.get(starColors);

        /*
        Turn all of the style attributes into a single style string
        to assign to the star
        */
        let attributes = [
            {name: "top", value: top},
            {name: "left", value: top},
            {name: "left", value: left},
            {name: "width", value: size},
            {name: "height", value: size},
            {name: "transform-origin", value: transformOrigin},
            {name: "animation", value: "orbit " ++ animationDuration ++ " linear " ++ animationDelay ++ " infinite"},
            {name: "background-color", value: color}
        ]

        let styleString = createStyleString(attributes);

        /*
        Create the star and set the style string created above.
        */
        let star = Webapi.Dom.Document.createElement("div", document);
        Webapi.Dom.Element.setClassName(star, "star");
        Webapi.Dom.Element.setAttribute("style", styleString, star);

        element##appendChild(star);
    };

    for (_ in 0 to numStars) {
        setTimeout(createStar, 0);
    };
}