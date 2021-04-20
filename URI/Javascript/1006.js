var input = require("fs").readFileSync("./dev/stdin", "utf8");
var lines = input.split("\n");

var average = function () {
  return (
    (parseFloat(lines.shift()) * 2 +
      parseFloat(lines.shift()) * 3 +
      parseFloat(lines.shift()) * 5) /
    (2 + 3 + 5)
  );
};

console.log("MEDIA = " + average().toFixed(1));
