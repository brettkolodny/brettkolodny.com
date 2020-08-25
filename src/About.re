let githubSvg = Utility.loadImage("../assets/svg/github.svg");
let personSvg = Utility.loadImage("../assets/svg/person.svg");
let linkedinSvg = Utility.loadImage("../assets/svg/linkedin.svg");
let instagramSvg = Utility.loadImage("../assets/svg/instagram.svg");
let resume = Utility.loadImage("../assets/Brett\ Kolodny\ -\ Resume.pdf");

[@react.component]
let make = () => {
    <div id="about">
        <div id="about-content">
            <div id="about-links">
                <LinkButton svgPath=githubSvg linkLoc="https://www.github.com/brettkolodny" alt="github"/>
                <LinkButton svgPath=personSvg linkLoc=resume alt="Resume" />
                <LinkButton svgPath=linkedinSvg linkLoc="https://www.linkedin.com/in/brett-kolodny" alt="linkedin"/>
                <LinkButton svgPath=instagramSvg linkLoc="https://instagram.com/breadblends" alt="instagram"/>
            </div>
        </div>
    </div>
}