var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");

let count = 0;
for (let i = 0; i < input.length; i++) {
  if (input[i] > 0) count++;
}
console.log(count + " valores positivos");
