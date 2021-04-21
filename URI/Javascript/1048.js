var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n")[0];

var salary = input;
var calculate = function () {
  return salary <= 400.0
    ? "Novo salario: " +
        (salary * 1.15).toFixed(2) +
        "\nReajuste ganho: " +
        (salary * 0.15).toFixed(2) +
        "\nEm percentual: 15 %"
    : salary <= 800.0
    ? "Novo salario: " +
      (salary * 1.12).toFixed(2) +
      "\nReajuste ganho: " +
      (salary * 0.12).toFixed(2) +
      "\nEm percentual: 12 %"
    : salary <= 1200.0
    ? "Novo salario: " +
      (salary * 1.1).toFixed(2) +
      "\nReajuste ganho: " +
      (salary * 0.1).toFixed(2) +
      "\nEm percentual: 10 %"
    : salary <= 2000.0
    ? "Novo salario: " +
      (salary * 1.07).toFixed(2) +
      "\nReajuste ganho: " +
      (salary * 0.07).toFixed(2) +
      "\nEm percentual: 7 %"
    : salary > 2000.0
    ? "Novo salario: " +
      (salary * 1.04).toFixed(2) +
      "\nReajuste ganho: " +
      (salary * 0.04).toFixed(2) +
      "\nEm percentual: 4 %"
    : salary.toFixed(2);
};

console.log(calculate());
