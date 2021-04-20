var input = require("fs")
  .readFileSync("./dev/stdin", "utf8")
  .split("\n")[0]
  .split(" ");

console.log(Math.max(Math.max(input[0], input[1]), input[2]) + " eh o maior");
