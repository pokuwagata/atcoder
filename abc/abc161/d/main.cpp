#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  x--; y--;
  vector<int> ans(n);
  rep(i,n) {
    queue<int> q;
    vector<int> d(n, INF);
    auto push = [&](int v, int dist) {
      if(d[v] != INF) return;
      d[v] = dist;
      q.push(v);
    };
    push(i, 0);
    while(!q.empty()) {
      int v = q.front(); q.pop();
      if(v + 1 < n) push(v+1, d[v] + 1);
      if(v - 1 >= 0) push(v-1, d[v] +1);
      if(v == x) push(y, d[v] + 1);
      if(v == y) push(x, d[v] + 1);
    }
    rep(i,n)ans[d[i]]++;
  }
  rep(i,n) ans[i] /= 2;
  for(int i=1; i<n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}