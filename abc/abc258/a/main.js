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
  var [k] = getInt(lines[0]);

  if (k < 10) console.log("21:0" + k);
  if (10 <= k && k < 60) console.log("21:" + k);
  if (60 <= k && k < 70) console.log("22:0" + (k - 60));
  if (70 <= k) console.log("22:" + (k - 60));
}
