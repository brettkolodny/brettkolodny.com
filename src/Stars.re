[@bs.val] external setTimeout: (unit => unit, int) => unit = "setTimeout";
[@bs.val] external document: Js.t({..}) = "document";
[@bs.val] external window: Js.t({..}) = "window";
[@bs.set] external setTransformOrigin: (Dom.cssStyleDeclaration, string) => unit = "transform-origin";

let makeStars = (numStars, element) => {
    /*
    Initialize the randomization so that the values are not the same every time you
    load the page.
    */
    Random.self_init();
    
    let createStar = () => {
        /*
        Get randomized values for the star's initial position, size, transform, and 
        animation duration/delay and then format them into the proper strings.
        */
        let top = ((Random.int(150) - 50) -> string_of_int) ++ "%";
        let left = ((Random.int(150) - 50) -> string_of_int) ++ "%";

        let size = ((Random.int(9) + 10) -> string_of_int) ++ "px";

        let x = ((Random.int(71) + 30) -> string_of_int) ++ "px";
        let y = ((Random.int(71) + 30) -> string_of_int) ++ "px";
        let transformOrigin = x ++ " " ++ y;

        let animationDuration = ((Random.int(15) + 10) -> string_of_int) ++ "s";
        let animationDelay = ((Random.int(8) * -1) -> string_of_int) ++ "s";

        /*
        Create the star and set the values created above.
        */
        let star = document##createElement("div");

        star##className #= "star";

        star##style##top #= top;
        star##style##left #= left;

        star##style##height #= size;
        star##style##width #= size;

        setTransformOrigin(star##style, transformOrigin);
        star##style##animation #= ("orbit " ++ animationDuration ++ " linear " ++ animationDelay ++ " infinite");

        element##appendChild(star);
    };

    for (_ in 0 to numStars) {
        setTimeout(createStar, 0);
    };
}