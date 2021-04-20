var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");

var employeeId = parseInt(input.shift());
var salary = function () {
  return parseInt(input.shift()) * parseFloat(input.shift());
};

console.log(
  "NUMBER = " + employeeId + "\n" + "SALARY = U$ " + salary().toFixed(2)
);
