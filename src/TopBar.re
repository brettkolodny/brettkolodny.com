let resume = Utility.loadImage("../assets/Brett\ Kolodny\ -\ Resume.pdf");
let keybase = Utility.loadImage("../assets/keybaseauth.txt");

[@react.component]
let make = () => {
  <div id="top-bar">
    <a href="#portfolio"> {ReasonReact.string("portfolio")} </a>
    <a href=resume> {ReasonReact.string("resume")} </a>
    <a id="keybase" href=keybase />
  </div>;
};
