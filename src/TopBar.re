[@react.component]
let make = () => {
    <div id="top-bar">
        <a href="#title">{ReasonReact.string("home")}</a>
        <a href="#portfolio">{ReasonReact.string("portfolio")}</a>
        <a href="/assets/Brett\ Kolodny\ -\ Resume.pdf">{ReasonReact.string("resume")}</a>
    </div>
}