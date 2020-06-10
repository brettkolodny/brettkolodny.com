[@bs.module "../../node_modules/react-bootstrap/esm/Navbar.js"][@react.component]
external make: (~className: string=?, 
                ~_as: string=?,
                ~bg: string=?,
                ~collapseOnSelect: bool=?,
                ~expand: string=?,
                ~expanded: bool=?,
                ~fixed: string=?,
                ~onSelect: (unit => unit)=?,
                ~onToggle: (unit => unit)=?,
                ~role: string=?,
                ~sticky: string=?,
                ~variant: string=?,
                ~bsPrefix: string=?,
                ~children: React.element
    ) => React.element = "default";

module Brand {
    [@bs.module "../../node_modules/react-bootstrap/esm/NavbarBrand.js"][@react.component]
    external make: (~_as: string=?,
                    ~href: string=?,
                    ~bsPrefix: string=?,
                    ~children: React.element
        ) => React.element = "default";
    };

module Collapse {
    [@bs.module "../../node_modules/react-bootstrap/esm/NavbarCollapse.js"][@react.component]
    external make: (~id: string=?, 
                    ~_as: string=?,
                    ~label: string=?,
                    ~onClick: (unit => unit)=?,
                    ~bsPrefix: string=?, 
                    ~children: React.element
        ) => React.element = "default";
};

module Toggle {
    [@bs.module "../../node_modules/react-bootstrap/esm/NavbarToggle.js"][@react.component]
    external make: (~label: string=?,
                    ~_as: string=?,
                    ~children: React.element=?,
                    ~onClick: (unit => unit)=?,
                    ~bsPrefix: string=?
        ) => React.element = "default";
};
