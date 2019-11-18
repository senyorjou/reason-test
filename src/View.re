[@react.component]
let make = () => {
  let (count, setCount) = React.useState(() => 0);
  <div>
    <h1 className="is-size-2"> {ReasonReact.string("View")} </h1>
    <button onClick={_event => setCount(_ => count + 1)}>
      {ReasonReact.string("Clicked " ++ string_of_int(count) ++ " times")}
    </button>
  </div>;
};