[@bs.module "../../node_modules/react-bootstrap/esm/Nav.js"][@react.component]
external make: (~className: string=?, 
                ~activeKey: string=?,
                ~_as: string=?,
                ~cardHeaderBsPrefix: string=?,
                ~fill: bool=?,
                ~justify: bool=?,
                ~navbar: bool=?,
                ~navbarBsPrefix: string=?,
                ~onKeyDown: (unit => unit)=?,
                ~onSelect: (unit => unit)=?,
                ~role: string=?,
                ~variant: string=?,
                ~bsPrefix: string=?,
                ~children: React.element
    ) => React.element = "default";

module Link {
    [@bs.module "../../node_modules/react-bootstrap/esm/NavLink.js"][@react.component]
    external make: (~active: bool=?,
                    ~_as: string=?,
                    ~disabled: bool=?,
                    ~eventKey: string=?,
                    ~href: string=?, 
                    ~onSelect: (unit => unit)=?,
                    ~role: string=?,
                    ~bsPrefix: string=?,
                    ~children: React.element
        ) => React.element = "default";
}

module Item {
    [@bs.module "../../node_modules/react-bootstrap/esm/NavLink.js"][@react.component]
    external make: (~_as: string=?,
                    ~role: string=?,
                    ~bsPrefix: string=?
        ) => React.element = "default";
};
