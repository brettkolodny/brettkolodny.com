[@bs.module "react-bootstrap/Alert"][@react.component]
external make: (~closeLabel: string=?,
                ~dismissible: bool=?,
                ~onClose: (unit => unit)=?,
                ~show: bool=?,
                ~transition: React.element=?,
                ~variant: string=?,
                ~bsPrefix: string=?,
                ~children: React.element
    ) => React.element = "default";


module Link {
    [@bs.module "react-bootstrap/Alert"][@react.component]
    external make: (~_as: string=?,
                    ~bsPrefix: string=?,
                    ~href: string=?,
                    ~children: React.element
        ) => React.element = "Link";
};
