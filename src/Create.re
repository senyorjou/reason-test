open Belt;

[@react.component]
let make = () => {
  let (items, setItems) = React.useState(() => ["One", "Two"]);

  // let dispatch = () => {
  //   setItems(["AA", "BB"]);
  // };

  let todos = List.map(items, item => <Entry label=item />);

  <div>
    <h1 className="is-size-2"> {ReasonReact.string("Create")} </h1>
    <form action="" className="box">
      <div className="field">
        <div className="control">
          <input placeholder="label" className="input" />
        </div>
      </div>
      <div className="field">
        <div className="control">
          <input placeholder="value" className="input" />
        </div>
      </div>
      <div className="field">
        <button onClick={_event => ()} className="button is-success">
          {ReasonReact.string("Add")}
        </button>
      </div>
    </form>
    // <ul> {ReasonReact.array(List.toArray(todos))} </ul>
    <ul> {
      ReasonReact.Array(List.map(items, item => <Entry label=item key=item/>))
    }
  </div>;
};

  //   <ul>
  //         {
  //           ReasonReact.array(
  //             List.map(
  //               (invoice: Invoice.t) => <Invoice invoice key={invoice.id} />,
  //               invoices,
  //             )
  //             |> Array.of_list,
  //           )
  //         }
  //  </ul>