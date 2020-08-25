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
                <p className="project-title">{ReasonReact.string(details.title)}</p>
                <p className="project-desc">{ReasonReact.string(details.desc)}</p>
            </div>
        </a>
    </div>
}