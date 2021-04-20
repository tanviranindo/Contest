var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");
var calculate = 0.0;
for (let i = 0; i < 2; i++) {
  var temp = input[i].split(" ");
  calculate += parseInt(temp[1]) * parseFloat(temp[2]);
}
console.log("VALOR A PAGAR: R$ " + calculate.toFixed(2));
