var input = require("fs")
  .readFileSync("./dev/stdin", "utf8")
  .split("\n")[0]
  .split(" ");

var hour = parseInt(input[0]) * 60 + parseInt(input[1]);
var minute = parseInt(input[2]) * 60 + parseInt(input[3]);
var conversion =
  hour == minute
    ? 24 * 60
    : hour < minute
    ? minute - hour
    : 24 * 60 - hour + minute;
console.log(
  "O JOGO DUROU " +
    Math.floor(conversion / 60) +
    " HORA(S) E " +
    Math.floor(conversion % 60) +
    " MINUTO(S)"
);
