var input = require("fs")
  .readFileSync("./dev/stdin", "utf8")
  .split("\n")[0]
  .split(" ");

var triangulo = (0.5 * parseFloat(input[0]) * parseFloat(input[2])).toFixed(3);
var circulo = (3.14159 * Math.pow(parseFloat(input[2]), 2)).toFixed(3);
var trapezio = (
  ((parseFloat(input[0]) + parseFloat(input[1])) / 2) *
  parseFloat(input[2])
).toFixed(3);
var quadrado = Math.pow(parseFloat(input[1]), 2).toFixed(3);
var rectangulo = (parseFloat(input[0]) * parseFloat(input[1])).toFixed(3);

console.log(
  "TRIANGULO: " +
    triangulo +
    "\nCIRCULO: " +
    circulo +
    "\nTRAPEZIO: " +
    trapezio +
    "\nQUADRADO: " +
    quadrado +
    "\nRETANGULO: " +
    rectangulo
);
