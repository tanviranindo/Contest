var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n")[0];

var notas = [100, 50, 20, 10, 5, 2];
var moedas = [1.0, 0.5, 0.25, 0.1, 0.05, 0.01];

var calculate = function () {
  console.log("NOTAS:");
  for (let i = 0; i < notas.length; i++) {
    console.log(
      Math.floor(input / notas[i]) + " nota(s) de R$ " + notas[i].toFixed(2)
    );
    input = (input % notas[i]).toFixed(2);
  }
  console.log("MOEDAS:");
  for (let i = 0; i < moedas.length; i++) {
    console.log(
      Math.floor(input / moedas[i]) + " moeda(s) de R$ " + moedas[i].toFixed(2)
    );
    input = (input % moedas[i]).toFixed(2);
  }
};
calculate();
