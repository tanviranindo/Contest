var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n")[0];

console.log(
  Math.floor(input / 3600) +
    ":" +
    Math.floor((input % 3600) / 60) +
    ":" +
    Math.floor((input % 3600) % 60)
);
