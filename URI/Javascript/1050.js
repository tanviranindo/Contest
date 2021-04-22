var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");

let ddd = [61, 71, 11, 21, 32, 19, 27, 31];
let destination = [
  "Brasilia",
  "Salvador",
  "Sao Paulo",
  "Rio de Janeiro",
  "Juiz de Fora",
  "Campinas",
  "Vitoria",
  "Belo Horizonte",
];

let index;
for (let i = 0; i < ddd.length; i++) {
  if (ddd[i] == parseInt(input)) index = i;
}
console.log(
  destination[index] === undefined ? "DDD nao cadastrado" : destination[index]
);
