var input = require("fs")
  .readFileSync("./dev/stdin", "utf8")
  .split("\n")[0]
  .split(" ");

let a = input[0],
  b = input[1],
  c = input[2],
  formula = Math.pow(b, 2) - 4 * a * c;

console.log(
  a == 0 || formula < 0
    ? "Impossivel calcular"
    : "R1 = " +
        ((-b + Math.sqrt(formula)) / (2 * a)).toFixed(5) +
        "\nR2 = " +
        ((-b - Math.sqrt(formula)) / (2 * a)).toFixed(5)
);
