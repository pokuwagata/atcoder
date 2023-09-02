process.stdin.resume();
process.stdin.setEncoding("utf8");

var lines = [];
var reader = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});
reader.on("line", (line) => {
  lines.push(line.split(" "));
});
reader.on("close", solve);

function getInt(strArr) {
  var rtn = [];
  for (elem of strArr) rtn.push(parseInt(elem));
  return rtn;
}

function getFloat(strArr) {
  var rtn = [];
  for (elem of strArr) rtn.push(parseFloat(elem));
  return rtn;
}

function solve() {
  const t = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  var [n, x] = getInt(lines[0]);
  let i = 0;
  if (x % n === 0) i = x / n;
  else i = x / n + 1;

  console.log(t[Math.floor(i) - 1]);
}
