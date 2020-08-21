[@bs.val] external document: Js.t({..}) = "document";

let root = document##getElementById("root");

ReactDOMRe.render(
  <div>
    <div id="stars"></div>
    <TopBar />
    <div id="content">
      <h1 id="title">{ReasonReact.string("Brett Kolodny")}</h1>
      <div id="link-buttons">
        <LinkButton svgPath="assets/svg/github.svg" linkLoc="https://www.github.com/brettkolodny" alt="GitHub" />
        <LinkButton svgPath="assets/svg/code.svg" linkLoc="#portfolio" alt="Portfolio" />
        <LinkButton svgPath="assets/svg/person.svg" linkLoc="/assets/Brett\ Kolodny\ -\ Resume.pdf" alt="Resume" />
      </div>
      <div id="portfolio-seperator"></div>
      <Portfolio />
      <div id="about-seperator"></div>
      <About />
    </div>
  </div>
  ,root
);

Stars.makeStars(200, document##getElementById("stars"));