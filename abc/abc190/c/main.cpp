#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> c(m);
  rep(i, m) {
    cin >> c[i].first >> c[i].second;
  }
  int k;
  cin >> k;

  vector<pair<int, int>> p(k);
  rep(i, k) {
    cin >> p[i].first >> p[i].second;
  }

  int ans = 0;
  rep(i, 1 << k ) {
    set<int> v;
    rep(j, k) {
      if(i >> j & 1) {
        v.insert(p[j].second);
      } else {
        v.insert(p[j].first);
      }
    }

    int cnt = 0;
    rep(j, m) {
      if(v.count(c[j].first) && v.count(c[j].second)) cnt++;
    }
    ans = max(ans, cnt);
  }

    cout << ans << endl;
  return 0;
}