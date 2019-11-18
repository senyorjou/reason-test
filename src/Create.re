open Belt;

type item = {
  id: int,
  name: string,
  value: string,
};

[@react.component]
let make = () => {
  let (items, setItems) = React.useState(() => ["AA", "BB"]);

  let add = () => {
    setItems(_ => ["foo", ...items]);
  };

  <div>
    <h1 className="is-size-2"> {ReasonReact.string("Create")} </h1>
    <form className="box">
      <div className="field">
        <div className="control">
          <input onChange={_ => ()} placeholder="label" className="input" />
        </div>
      </div>
      <div className="field">
        <div className="control">
          <input placeholder="value" className="input" />
        </div>
      </div>
      <div className="field">
        <a onClick={_event => add()} className="button is-success">
          {ReasonReact.string("Add")}
        </a>
      </div>
    </form>
    <ul>
      {List.map(items, item => <Entry key=item label=item />)
       |> List.toArray
       |> ReasonReact.array}
    </ul>
  </div>;
};