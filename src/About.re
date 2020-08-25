[@react.component]
let make = () => {
    <div id="about">
        <div id="about-content">
            <div id="about-links">
                <LinkButton svgPath="/assets/svg/github.svg" linkLoc="https://www.github.com/brettkolodny" alt="github"/>
                <LinkButton svgPath="assets/svg/person.svg" linkLoc="/assets/Brett\ Kolodny\ -\ Resume.pdf" alt="Resume" />
                <LinkButton svgPath="/assets/svg/linkedin.svg" linkLoc="https://www.linkedin.com/in/brett-kolodny" alt="linkedin"/>
                <LinkButton svgPath="/assets/svg/instagram.svg" linkLoc="https://instagram.com/breadblends" alt="instagram"/>
            </div>
        </div>
    </div>
}