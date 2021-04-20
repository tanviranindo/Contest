var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");

console.log((input[0] / input[1]).toFixed(3) + " km/l");
