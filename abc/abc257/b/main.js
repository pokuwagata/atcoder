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
  const [n, k, q] = getInt(lines[0]);
  const a = getInt(lines[1]);
  const l = getInt(lines[2]);

  for (const b of l) {
    if (a[b - 1] === n) continue;
    let ok = true;
    for (const c of a) {
      if (c === a[b - 1] + 1) {
        ok = false;
        break;
      }
    }
    if (ok) a[b - 1]++;
  }

  console.log(a.join(" "));
}
