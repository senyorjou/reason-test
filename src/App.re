[%bs.raw {|require('./App.css')|}];

[@react.component]
let make = () => {
  <div>
    <h1 className="is-size-2 has-text-centered">
      {ReasonReact.string("3 pane view")}
    </h1>
    <div className="columns">
      <div className="column has-background-white-ter"> <Create /> </div>
      <div className="column has-background-grey-lighter"> <View /> </div>
      <div className="column has-background-grey-light"> <Explore /> </div>
    </div>
  </div>;
};