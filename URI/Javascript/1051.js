var input = require("fs").readFileSync("./dev/stdin", "utf8");
var lines = input.split("\n");
input = input.replace("\n", " ");
var lines = input.split(" ");
var salary = parseFloat(lines.shift());

var c, b;
if (salary >= 0.0 && salary <= 2000.0) {
  console.log("Isento");
}
if (salary >= 2000.01 && salary <= 3000.0) {
  b = salary - 2000;
  c = b * 0.08;
  console.log("R$ " + c.toFixed(2));
}
if (salary >= 3000.01 && salary <= 4500.0) {
  b = salary - 3000;
  c = b * 0.18 + 1000 * 0.08;
  console.log("R$ " + c.toFixed(2));
}
if (salary > 4500.0) {
  b = salary - 4500;
  c = b * 0.28 + 1500 * 0.18 + 1000 * 0.08;
  console.log("R$ " + c.toFixed(2));
}
