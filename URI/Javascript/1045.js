var input = require("fs")
  .readFileSync("./dev/stdin", "utf8")
  .split("\n")[0]
  .split(" ");

let a = parseInt(input.shift()),
  b = parseInt(input.shift()),
  c = parseInt(input.shift());

var calculate = function () {
  if (a < b) (a += b), (b = a - b), (a -= b);
  if (a < c) (a += c), (c = a - c), (a -= c);
  if (b < c) (b += c), (c = b - c), (b -= c);
  let d = a * a,
    e = b * b + c * c;
  if (a >= b + c) console.log("NAO FORMA TRIANGULO");
  else {
    if (d === e) console.log("TRIANGULO RETANGULO");
    if (d > e) console.log("TRIANGULO OBTUSANGULO");
    if (d < e) console.log("TRIANGULO ACUTANGULO");
    if (a === b && b === c) console.log("TRIANGULO EQUILATERO");
    else if (a === b || b === c || a === c) console.log("TRIANGULO ISOSCELES");
  }
};
calculate();
