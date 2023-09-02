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
  var [a, b, d] = getInt(lines[0]);
  const r = (2 * Math.PI * d) / 360;
  const s = a * Math.cos(r) - b * Math.sin(r);
  const t = a * Math.sin(r) + b * Math.cos(r);
  console.log(s, t);
}
