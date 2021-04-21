var input = require("fs")
  .readFileSync("./dev/stdin", "utf8")
  .split("\n")[0]
  .split(" ");
let a = parseFloat(input[0]),
  b = parseFloat(input[1]),
  c = parseFloat(input[2]);
console.log(
  a < b + c && b < a + c && c < a + b
    ? "Perimetro = " + (a + b + c).toFixed(1)
    : "Area = " + (((a + b) * c) / 2.0).toFixed(1)
);
