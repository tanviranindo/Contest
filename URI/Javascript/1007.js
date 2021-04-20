var input = require("fs").readFileSync("./dev/stdin", "utf8");
var lines = input.split("\n");

var difference = function () {
  return (
    parseInt(lines.shift()) * parseInt(lines.shift()) -
    parseInt(lines.shift()) * parseInt(lines.shift())
  );
};

console.log("DIFERENCA = " + difference());
