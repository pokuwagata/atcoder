#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

const int INF = 1001001001;

int main() {
  int n, m, x;
  int a[12][12];
  int c[12];
  cin >> n >> m >> x;
  rep(i,n) {
    cin >> c[i];
    rep(j,m) {
      cin >> a[i][j];
    }
  }

  int ans = INF;
  rep(i, 1<<n) {
    int cost =0;
    vector<int> d(m);
    rep(j, n) {
      if(i>>j &1) {
        cost+=c[j];
        rep(k, m) d[k]+=a[j][k];
      }
    }
    bool ok = true;
    rep(j, m) if (d[j] < 10) ok = false;
    if(ok) {
      ans = min(ans, cost);
    }
  }
  if(ans == INF) cout << -1 << endl;
  else cout << ans << endl;
  return 0;
}