let tempDescription = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam";

[@react.component]
let make = () => {
    <div className="project" href="#">
        <img className="project-image" src=""/>
        <div className="project-body">
            <p className="project-title">{ReasonReact.string("Lorem Ipsum")}</p>
            <p className="project-desc">{ReasonReact.string(tempDescription)}</p>
        </div>
    </div>
}