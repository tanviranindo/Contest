var input = require("fs")
  .readFileSync("./dev/stdin", "utf8")
  .split("\n")[0]
  .split(" ");

var temp = Array.from(input);
input.sort(function (a, b) {
  return a - b;
});

input.forEach((element) => {
  console.log(element);
});
console.log();
temp.forEach((element) => {
  console.log(element);
});
