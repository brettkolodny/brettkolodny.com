let resume = Utility.loadImage("../assets/Brett\ Kolodny\ -\ Resume.pdf");

[@react.component]
let make = () => {
    <div id="top-bar">
        <a href="#portfolio">{ReasonReact.string("portfolio")}</a>
        <a href=resume>{ReasonReact.string("resume")}</a>
    </div>
}