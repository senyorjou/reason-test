[@react.component]
let make = (~message, ~children) => {
  let (count, setCount) = React.useState(() => 0);

  let handleClick = _event => {
    Js.log("clicked!");
    setCount(_ => count + 1);
  };

  <div>
    children
    <button onClick=handleClick>
      {ReasonReact.string(message ++ string_of_int(count))}
    </button>
  </div>;
};