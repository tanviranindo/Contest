var input = require("fs")
  .readFileSync("./dev/stdin", "utf8")
  .split("\n")[0]
  .split(" ");

console.log(
  input[0] == 0 && input[1] == 0
    ? "Origem"
    : input[0] == 0
    ? "Eixo Y"
    : input[1] == 0
    ? "Eixo X"
    : input[0] > 0 && input[1] > 0
    ? "Q1"
    : input[0] < 0 && input[1] > 0
    ? "Q2"
    : input[0] < 0 && input[1] < 0
    ? "Q3"
    : input[0] > 0 && input[1] < 0
    ? "Q4"
    : ""
);
