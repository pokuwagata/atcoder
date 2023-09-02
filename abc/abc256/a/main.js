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
  let [n] = getInt(lines[0]);
  console.log(1 << n);
}
