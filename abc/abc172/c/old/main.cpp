#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

vector<int> to[1000000];

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> ks(n+m);
  rep(i, n+1) {
    if(i==0) continue;
    cin >> ks[2*i -1];
    to[2*i -1].push_back(2*i);
    to[2*i -1].push_back(2*i + 1);
  }
  rep(i, m+1) {
    if(i==0) continue;
    cin >> ks[2*i];
    to[2*i].push_back(2*i - 1);
    to[2*i].push_back(2*i + 2);
  }
  to[0].push_back(1);
  to[0].push_back(2);
  vector<int> dist(n+m, -1);
  vector<int> tk(n+m, 0);
  queue<int> q;
  q.push(0);
  dist[0] = 0;
  tk[0] = 0;
  while(!q.empty()) {
    int v = q.front(); q.pop();
    for(int nv : to[v]) {
      if(dist[nv] != -1) continue;
      dist[nv] = dist[v] + 1;
      tk[nv] = ks[v] + ks[nv];
      q.push(nv);
    }
  }
  int ans = 0;
  rep(i, dist.size()) {
    cout << i << " " << dist[i] << endl;
    cout << i << " " << tk[i] << endl;
    if(tk[i] <= k) {
      ans = max(ans, dist[i]);
    }
  }
  cout << ans << endl;
  return 0;
}