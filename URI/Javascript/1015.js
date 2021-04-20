var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");

var first = input[0].split(" ");
var second = input[1].split(" ");

var distance = Math.sqrt(
  Math.pow(second[0] - first[0], 2) + Math.pow(second[1] - first[1], 2)
);

console.log(distance.toFixed(4));
