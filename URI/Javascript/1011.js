var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");

var calculate = function () {
  return (4 / 3) * 3.14159 * parseInt(input.shift());
};
console.log("VOLUME = " + calculate.toFixed(3));
