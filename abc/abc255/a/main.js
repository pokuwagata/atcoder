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
  let [r, c] = getInt(lines[0]);
  let [v, w] = getInt(lines[1]);
  let [x, y] = getInt(lines[2]);
  const d = [
    [v, w],
    [x, y],
  ];
  console.log(d[r - 1][c - 1]);
}
