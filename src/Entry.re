[@react.component]
let make = (~label) => {
  <li> {ReasonReact.string(label)} </li>;
};