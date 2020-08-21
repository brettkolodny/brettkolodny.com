[@react.component]
let make = () => {
    <div id="portfolio">
        <h2>{ReasonReact.string("Portfolio")}</h2>
        <div id="projects">
            <Project />
            <Project />
            <Project />
            <Project />
            <Project />
            <Project />
        </div>
    </div>
}