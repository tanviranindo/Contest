var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");

input.shift();
var salary = function () {
  return parseFloat(input.shift()) + parseFloat(input.shift()) * 0.15;
};

console.log("TOTAL = R$ " + salary().toFixed(2));
