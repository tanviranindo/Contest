var input = require("fs").readFileSync("./dev/stdin", "utf8");
var lines = input.split("\n");

var average = function () {
  return (
    (parseFloat(lines.shift()) * 3.5 + parseFloat(lines.shift()) * 7.5) /
    (3.5 + 7.5)
  );
};

console.log("MEDIA = " + average().toFixed(5));
