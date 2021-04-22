var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n")[0];

var number = [
  "January",
  "February",
  "March",
  "April",
  "May",
  "June",
  "July",
  "August",
  "September",
  "October",
  "November",
  "December",
];

console.log(number[parseInt(input) - 1]);
