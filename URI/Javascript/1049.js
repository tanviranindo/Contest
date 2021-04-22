var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");

console.log(
  input[0].includes("vertebrado") &&
    input[1].includes("ave") &&
    input[2].includes("carnivoro")
    ? "aguia"
    : input[0].includes("vertebrado") &&
      input[1].includes("ave") &&
      input[2].includes("onivoro")
    ? "pomba"
    : input[0].includes("vertebrado") &&
      input[1].includes("mamifero") &&
      input[2].includes("onivoro")
    ? "homem"
    : input[0].includes("vertebrado") &&
      input[1].includes("mamifero") &&
      input[2].includes("herbivoro")
    ? "vaca"
    : input[0].includes("invertebrado") &&
      input[1].includes("inseto") &&
      input[2].includes("hematofago")
    ? "pulga"
    : input[0].includes("invertebrado") &&
      input[1].includes("inseto") &&
      input[2].includes("herbivoro")
    ? "lagarta"
    : input[0].includes("invertebrado") &&
      input[1].includes("anelideo") &&
      input[2].includes("hematofago")
    ? "sanguessuga"
    : input[0].includes("invertebrado") &&
      input[1].includes("anelideo") &&
      input[2].includes("onivoro")
    ? "minhoca"
    : ""
);
