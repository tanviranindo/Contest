var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n")[0];

console.log(
  Math.floor(input / 365) +
    " ano(s)\n" +
    Math.floor((input % 365) / 30) +
    " mes(es)\n" +
    Math.floor((input % 365) % 30) +
    " dia(s)"
);
