[@bs.module "../../node_modules/react-bootstrap/esm/Carousel.js"][@react.component]
external make: (
        ~_as: string=?,
        ~controls: bool=?,
        ~fade: bool=?,
        ~indicators: bool=?,
        ~interval: int=?,
        ~keyboard: bool=?,
        ~nextLabel: string=?,
        ~pauseOnHover: bool=?,
        ~slide: bool=?,
        ~touch: bool=?,
        ~wrap: bool=?,
        ~bsPrefix: string=?,
        ~children: React.element
    ) => React.element = "default";

module Caption {
    [@bs.module "../../node_modules/react-bootstrap/esm/CarouselCaption.js"][@react.component]
    external make: (~_as: string=?, ~bsPrefix: string=?, ~children: React.element) => React.element = "default";
};

module Item {
    [@bs.module "../../node_modules/react-bootstrap/esm/CarouselItem.js"][@react.component]
    external make: (~_as: string=?, ~bsPrefix: string=?, ~children: React.element) => React.element = "default";
};
