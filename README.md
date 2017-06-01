## Exercises based on 
http://facebook.github.io/reason/jsConversion.html#converting-your-javascript-to-reason

## Running the development environment
```
$ npm run dev
```

## Creating a production bundle
Minifies & drops dead code
```
$ npm run prod
```

It expects a src/main.re file as an entry point to create the bundle.

## Check the bundle details
With every compilation a stats.json file is produced in the root, visit https://webpack.github.io/analyse/ and drop that file to get a good insight of your bundle.

## Play with it
Edit src/main.re and check the changes on __localhost:3000__
