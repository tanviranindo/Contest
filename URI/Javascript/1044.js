var input = require("fs")
  .readFileSync("./dev/stdin", "utf8")
  .split("\n")[0]
  .split(" ");

console.log(
  input[1] % input[0] === 0 || input[0] % input[1] === 0
    ? "Sao Multiplos"
    : "Nao sao Multiplos"
);
