#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

void dfs(int v, vector<int>&a, int d) {
  a.push_back(v);
  if(d == 8) {
    return;
  }

  for(int i=-1; i<=1; i++) {
    int v2 = v % 10 + i;
    if(v2 < 0 || v2 >9) continue;
    int v3 = v*10+v2;
    // if(v2 >=0 && v2<=9) dfs(v3, a, d+1);
    // a.push_back(v3);
    dfs(v3, a, d+1);
  }
}

int main() {
  int k;
  cin >> k;
  vector<int>a;
  for(int i=1; i<=9; i++) dfs(i, a, 1);
  sort(a.begin(), a.end());
  rep(i,20) cout << a[i] << ' ' << endl;
  cout << a[k-1] << endl;
  return 0;
}