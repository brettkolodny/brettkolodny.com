[@react.component]
let make = () => {
    <div id="top-bar">
        <a href="#title">{ReasonReact.string("home")}</a>
        <a href="#portfolio">{ReasonReact.string("portfolio")}</a>
        <a href="#about">{ReasonReact.string("about")}</a>
    </div>
}