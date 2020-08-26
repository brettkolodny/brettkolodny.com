[@bs.val] external document: Dom.document = "document";
[@bs.send.pipe: Dom.document] external getElementById: string => Dom.element = "getElementById";
[@bs.val] external addEventListener: (string, (Dom.event => unit)) => unit = "addEventListener";
[@bs.get] external getStyle: Dom.element => Dom.cssStyleDeclaration = "style";
[@bs.get] external scrollingElement: Dom.eventTarget => Dom.element = "scrollingElement";

let githubSvg = Utility.loadImage("../assets/svg/github.svg");
let codeSvg = Utility.loadImage("../assets/svg/code.svg");
let linkedinSvg = Utility.loadImage("../assets/svg/linkedin.svg");
let downSvg = Utility.loadImage("../assets/svg/down-arrow.svg");

let root = getElementById("root", document);
ReactDOMRe.render(
  <div>
      <div id="stars"></div>
      <TopBar />
      <div id="content">
        <div id="home">
          <h1 id="title">{ReasonReact.string("Brett Kolodny")}</h1>
          <div id="link-buttons">
            <LinkButton svgPath=githubSvg linkLoc="https://www.github.com/brettkolodny" alt="GitHub" />
            <LinkButton svgPath=codeSvg linkLoc="#portfolio" alt="Portfolio" />
            <LinkButton svgPath=linkedinSvg linkLoc="https://www.linkedin.com/in/brett-kolodny" alt="linkedin"/>
          </div>
        </div>
        <div id="down">
            <img src=downSvg alt="Down" />
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

let blurEvent = e => {
  let scrollElement = e -> Webapi.Dom.Event.target -> scrollingElement;
  Effects.blur(scrollElement);
};

let hideHomeEvent = e => {
  let scrollElement = e -> Webapi.Dom.Event.target -> scrollingElement;
  Effects.hideHome(scrollElement);
}

addEventListener("scroll", blurEvent);
addEventListener("scroll", hideHomeEvent);