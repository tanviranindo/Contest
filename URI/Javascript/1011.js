var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");

var calculate = function () {
  return (4 / 3) * 3.14159 * Math.pow(parseInt(input.shift()), 3);
};
console.log("VOLUME = " + calculate().toFixed(3));
