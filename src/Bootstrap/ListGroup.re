[@bs.module "../../node_modules/react-bootstrap/esm/ListGroup.js"][@react.component]
external make: (~_as: string=?,
                ~horizontal: string=?,
                ~variant: string=?,
                ~bsPrefix: string=?,
                ~children: React.element
    ) => React.element = "default";

module Item {
    [@bs.module "../../node_modules/react-bootstrap/esm/ListGroupItem.js"][@react.component]
    external make: (~action: bool=?,
                    ~active: bool=?,
                    ~_as: string=?,
                    ~disabled: bool=?,
                    ~eventKey: string=?,
                    ~href: string=?,
                    ~onClick: (unit => unit)=?,
                    ~vairant: string=?,
                    ~bsPrefix: string=?,
                    ~children: React.element
        ) => React.element = "default";
};
