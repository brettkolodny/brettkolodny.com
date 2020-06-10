[@bs.module "../../node_modules/react-bootstrap/esm/NavDropdown.js"][@react.component]
external make: (~title: string, ~id: string, ~children: React.element) => React.element = "default";

module Item {
    [@bs.module "../../node_modules/react-bootstrap/esm/DropdownItem.js"][@react.component]
    external make: (~href: string, ~children: React.element) => React.element = "default";
};
