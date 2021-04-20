var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n")[0];

var arr = [100, 50, 20, 10, 5, 2, 1];

var calculate = function () {
  for (let i = 0; i < arr.length; i++) {
    console.log(
      Math.floor(input / arr[i]) + " nota(s) de R$ " + arr[i] + ",00"
    );
    input %= arr[i];
  }
};

console.log(input);
calculate();
