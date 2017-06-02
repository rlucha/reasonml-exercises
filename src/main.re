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

let rec range i j =>
  if (i > j) {
    []
  } else {
    [i, ...range (i + 1) j]
  };

let sum x y => x + y;

let sum_by_2 = sum 2;

let exp5div7 x y => (float_of_int x *\* float_of_int y |> int_of_float) * 5 / 7;

external performance : 'a = "" [@@bs.val];

let nums = Array.of_list (range 0 10000);

let t0 = performance##now ();

Js.log (Array.map (exp5div7 3) nums);

let t1 = performance##now ();

Js.log ("Call to doSomething took " ^ string_of_int (t1 - t0) ^ " milliseconds.");

let nums = lodash##range 0 10000;

let t0 = performance##now ();

Js.log (lodash##map nums (exp5div7 3));

let t1 = performance##now ();

Js.log ("Call to doSomething took " ^ string_of_int (t1 - t0) ^ " milliseconds.");

Js.log "nums";

/* Transform List to Js Array */
/* Js.log (Js.Vector.ofList nums); */
