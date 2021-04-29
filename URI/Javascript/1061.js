var input = require("fs").readFileSync("./dev/stdin", "utf8").split("\n");

var day = 0,
  hour = 0,
  minute = 0,
  second = 0;

var firstline = input[1].split(" : ");
var secondline = input[3].split(" : ");

var day_i = input[0].split(" ")[1];
var day_f = input[2].split(" ")[1];

var hour_i = firstline[0];
var minute_i = firstline[1];
var second_i = firstline[2];

var hour_f = secondline[0];
var minute_f = secondline[1];
var second_f = secondline[2];

var bool_h = (bool_m = bool_s = false);

if (hour_i > hour_f) bool_h = true;
if (minute_i > minute_f) bool_m = true;
if (second_i > second_f) bool_s = true;

while (day_i != day_f) {
  day++;
  day_i++;
}

while (hour_i != hour_f) {
  hour++;
  hour_i++;
  if (hour_i == 25) hour_i = 1;
}

while (minute_i != minute_f) {
  minute++;
  minute_i++;
  if (minute_i == 61) minute_i = 1;
}

while (second_i != second_f) {
  second++;
  second_i++;
  if (second_i == 61) second_i = 1;
}

if (bool_h == true) day--;
if (bool_m == true) hour--;
if (bool_s == true) minute--;

console.log(
  day +
    " dia(s)\n" +
    hour +
    " hora(s)\n" +
    minute +
    " minuto(s)\n" +
    second +
    " segundo(s)"
);
