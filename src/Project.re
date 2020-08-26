type details = {
    imgPath: string,
    title: string,
    desc: string,
    link: string,
};

[@react.component]
let make = (~details: details) => {
    <div className="project">
        <a className="project-link" href=details.link>
            <img className="project-image" src=details.imgPath />
            <div className="project-body">
                <h3 className="project-title">{ReasonReact.string(details.title)}</h3>
                <span className="project-desc">{ReasonReact.string(details.desc)}</span>
            </div>
        </a>
    </div>
}