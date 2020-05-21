#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

vector<vector<int>> to;

void dfs(vector<int> x, vector<int>&ans, int old) {
  bool ok = true;
  for(int v : x) {
    if(!ans[v]) ok = false;
  }
  if(ok) return;

  for(int v : x) {
    if(!ans[v]) ans[v] = ans[old];
    dfs(to[v], ans, v);
  }
}

int main() {
  int n , m ;
  cin >> n >> m;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    to[a-1].push_back(b-1);
    to[b-1].push_back(a-1);
  }
  vector<int> ans;
  ans.push_back(1);
  dfs(to[0], ans, 1);
  return 0;
}