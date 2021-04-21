var input = require("fs")
  .readFileSync("./dev/stdin", "utf8")
  .split("\n")[0]
  .split(" ");

var arr = [4.0, 4.5, 5.0, 2.0, 1.5];

console.log(
  "Total: R$ " + (arr[input[0] - 1] * parseFloat(input[1])).toFixed(2)
);
