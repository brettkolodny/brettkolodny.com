type styleObject ={
    width: string
};
[@bs.module "../../node_modules/react-bootstrap/esm/Card.js"][@react.component]
external make: (
        ~className: string=?,
        ~style: styleObject=?, 
        ~body: bool=?,
        ~border: string=?,
        ~bg: string=?,
        ~text: string=?,
        ~bsPrefix: string=?,
        ~_as: string=?,
        ~href: string=?,
        ~children: React.element
    ) => React.element = "default";

module Body {
    [@react.component]
    let make = (~children) => {
        <div className="card-body">
            children 
       </div>
    };
};

module Header {
    [@react.component]
    let make = (~children: React.element) => {
        <div className="card-header">
            {children}
        </div>
    };
};

module Text {
    [@react.component]
    let make = (~children) => {
        <p className="card-text">
            {children}
        </p>
    };
};

module Title {
    [@react.component]
    let make = (~children) => {
        <div className="card-title h5">
            {children}
        </div>
    };
};

module Img {
    [@bs.module "../../node_modules/react-bootstrap/esm/CardImg.js"][@react.component]
    external make: (~_as: string=?,
                    ~bsPrefix: string=?,
                    ~variant: string=?, 
                    ~src: string
        ) => React.element = "default";
};

module Subtitle {
    [@react.component]
    let make = (~children) => {
        <div className="mb-2 text-muted">
            {children}
        </div>
    };
};
