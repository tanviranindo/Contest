var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");

var arr = input[0].split(" ");

var media = function () {
  let average =
    (arr[0] * 2 + arr[1] * 3 + arr[2] * 4 + arr[3] * 1) / (2 + 3 + 4 + 1);
  console.log("Media: " + average.toFixed(1));
  if (average < 5.0) console.log("Aluno reprovado.");
  else if (average >= 5.0 && average <= 6.9) {
    console.log("Aluno em exame.");
    let nota = (average + parseFloat(input[1])) / 2.0;
    console.log("Nota do exame: " + input[1]);
    console.log(nota >= 5.0 ? "Aluno aprovado." : "Aluno reprovado.");
    console.log("Media final: " + nota.toFixed(1));
  } else if (average >= 7.0) console.log("Aluno aprovado.");
};
media();
