[@bs.module "../../node_modules/react-bootstrap/esm/Accordion.js"][@react.component]
external make: (~activeKey: string=?,
                ~_as: string=?,
                ~defaultActiveKey: string=?,
                ~bsPrefix: string=?,
                ~children: React.element
    ) => React.element = "default";

module Toggle {
    [@bs.module "../../node_modules/react-bootstrap/esm/AccordionToggle.js"][@react.component]
    external make: (~_as: string=?,
                    ~children: React.element,
                    ~eventKey: string=?,
                    ~onClick: (unit => unit)=?
        ) => React.element = "default";
};

module Collapse {
    [@bs.module "../../node_modules/react-bootstrap/esm/AccordionToggle.js"][@react.component]
    external make: (~children: React.element=?,
                    ~eventKey: string=?
        ) => React.element = "default";
};
