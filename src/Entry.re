open Belt;

[@react.component]
let make = (~label) => {
  <li _key=label> {ReasonReact.string(label)} </li>;
};