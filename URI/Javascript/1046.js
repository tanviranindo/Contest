var input = require("fs")
  .readFileSync("./dev/stdin", "utf8")
  .split("\n")[0]
  .split(" ");

var answer = function () {
  duration = input[1] - input[0];
  if (duration < 0) duration = 24 + (input[1] - input[0]);
  return duration;
};
console.log(
  input[0] === input[1]
    ? "O JOGO DUROU 24 HORA(S)"
    : "O JOGO DUROU " + answer() + " HORA(S)"
);
