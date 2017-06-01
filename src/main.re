Js.log "Hello World";

/* let foo value =>
     switch value {
     | true => "yes"
     | 1 => "no"
     | false => "no"
     };

   let foo2 () => 3 + "foo";

   let foo3 () => "foo" + 3; */
/* module DOM = {
     type document;
     external document : document = "" [@@bs.val];
   }; */
/* let json_example = [%bs.obj { foo = "bar"; baz = 42}]; */
/* Using strings as keys creates a js obj */
let u = {"x": {"y": {"z": 3}}};

/* Creating records requires typing */
type u2 = {x: int, y: int, z: string};

let u2 = {x: 33, y: 22, z: "hi"};

/* Access Js.obj field */
let json_foo = u##x;

/* Access records has better syntax */
let u2_x = u2.x;

let ocaml_string = "from OCaml";

let call_me payload => Js.log (payload##msg##content ^ ocaml_string);

Js.log call_me;

Js.log json_foo;

/* Importing a JS module */
external lodash : 'a = "" [@@bs.module];

let my_array = [|1, 2, 3, 4, 5, 6|];

let sum x y => x + y;

let sum_by_2 = sum 2;

Js.log (Array.map sum_by_2 my_array);

Js.log (lodash##map my_array sum_by_2);
