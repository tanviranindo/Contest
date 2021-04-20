var input = require("fs").readFileSync("./dev/stdin", "utf8");
var lines = input.split("\n");

function areaOfCircle(r) {
  return 3.14159 * Math.pow(r, 2);
}

console.log("A=" + areaOfCircle(parseFloat(lines.shift())).toFixed(4));
