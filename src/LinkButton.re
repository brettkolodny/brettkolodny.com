[@react.component]
let make = (~svgPath, ~linkLoc, ~alt) => {
    <div>
        <a href=linkLoc>
            <img className="link-svg" src=svgPath alt=alt />
        </a>
    </div>
}