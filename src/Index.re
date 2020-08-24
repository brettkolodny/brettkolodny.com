[@bs.val] external document: Dom.document = "document";
[@bs.send.pipe: Dom.document] external getElementById: string => Dom.element = "getElementById";
[@bs.val] external addEventListener: (string, (Dom.event => unit)) => unit = "addEventListener";
[@bs.get] external getStyle: Dom.element => Dom.cssStyleDeclaration = "style";
[@bs.get] external scrollingElement: Dom.eventTarget => Dom.element = "scrollingElement";

let root = getElementById("root", document);
ReactDOMRe.render(
  <div>
      <div id="stars"></div>
      <TopBar />
      <div id="content">
        <div id="home">
          <h1 id="title">{ReasonReact.string("Brett Kolodny")}</h1>
          <div id="link-buttons">
            <LinkButton svgPath="assets/svg/github.svg" linkLoc="https://www.github.com/brettkolodny" alt="GitHub" />
            <LinkButton svgPath="assets/svg/code.svg" linkLoc="#portfolio" alt="Portfolio" />
            <LinkButton svgPath="assets/svg/person.svg" linkLoc="/assets/Brett\ Kolodny\ -\ Resume.pdf" alt="Resume" />
          </div>
        </div>
      </div>
      //<div id="portfolio-seperator"></div>
      <Portfolio />
      //<div id="about-seperator"></div>
      <About />
  </div>
  ,root
);

Stars.makeStars(200, getElementById("stars", document));

let homeDiv = getElementById("home", document);
let stars = Webapi.Dom.Document.getElementsByClassName("star", document);

let blur = (e) => {
  let pos = e -> Webapi.Dom.Event.target -> scrollingElement -> Webapi.Dom.Element.scrollTop;
  let maxHeight = e -> Webapi.Dom.Event.target -> scrollingElement -> Webapi.Dom.Element.scrollHeight -> float_of_int;
  let blurAmount = min(pos /. maxHeight *. 10.0, 6.0) -> Js.Float.toString;

  let propertyValue = "blur(" ++ blurAmount ++ "px)";

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

addEventListener("scroll", blur);