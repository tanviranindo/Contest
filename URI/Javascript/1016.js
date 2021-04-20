var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");

console.log(parseInt(input[0] * 2) + " minutos");
