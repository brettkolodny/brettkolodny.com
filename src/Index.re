module SectionLink {
    [@react.component]
    let make = (~href, ~image, ~alt) => {
        <div className="link-div">
            <a href={href} className="link">
                <img src={image} alt={alt} />
            </a>
        </div>
    };
}

module Resume {
    [@react.component]
    let make = () => {
        <SectionLink href="#resume" image={Utility.loadImage("../static/profile.png")} alt="Link to resume" />
    };
};

module GitHub {
    [@react.component]
    let make = () => {
        <SectionLink href="https://www.github.com/brettkolodny" image={Utility.loadImage("../static/github.png")} alt="Link to github profile" />
    };
};

module Portfolio {
    [@react.component]
    let make = () => {
        <SectionLink href="#portfolio" image={Utility.loadImage("../static/code.png")} alt="Link to github profile" />
    };
};

module Banner {
    [@react.component]
    let make = () => {
        <div id="banner">
            <h1 id="banner-text">{React.string("Brett Kolodny")}</h1>
        </div>
    };
}

module Background {
    [@react.component]
    let make = () => {
        <img id="background" src={Utility.loadImage("../static/background.svg")} />
        //<div id="background-image"><p>{React.string("arst")}</p></div>
    }
}

module Content {
    //let image = [%bs.raw {| require("../static/name_banner.svg") |}];
    [@react.component]
    let make = () => {
        <Container>
            <Row>
                <Col>
                    <Banner />
                </Col>
            </Row>
            <Row id="link-row">
                <Col sm="8" md="4">
                   <GitHub /> 
                </Col>
                <Col sm="8" md="4">
                    <Resume />
                </Col>
                <Col sm="8" md="4">
                    <Portfolio />
                </Col>
            </Row>
        </Container>
    };
};

ReactDOMRe.renderToElementWithId(<Content />, "content");
