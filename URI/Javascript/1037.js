var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n")[0];

console.log(
  input >= 0 && input <= 25
    ? "Intervalo [0,25]"
    : input > 25 && input <= 50
    ? "Intervalo (25,50]"
    : input > 50 && input <= 75
    ? "Intervalo (50,75]"
    : input > 75 && input <= 100
    ? "Intervalo (75,100]"
    : "Fora de intervalo"
);
