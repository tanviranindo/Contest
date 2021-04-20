var input = require("fs")
  .readFileSync("./dev/stdin", "utf8")
  .split("\n")[0]
  .split(" ");
  
let a = input[0],
  b = input[1],
  c = input[2],
  d = input[3];

console.log(
  (b > c) & (d > a) & (c + d > a + b)
    ? "Valores aceitos"
    : "Valores nao aceitos"
);
