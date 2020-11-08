#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  vector<set<int>> k(m);
  rep(i, m) {
    int kv;
    cin >> kv;
    set<int> s;
    rep(j, kv) {
      int sv;
      cin >> sv;
      s.insert(sv-1);
    }
    k[i] = s;
  }
  vector<int> p(m);
  rep(i, m) cin >> p[i];

  int ans =0;
  rep(i, 1<<n) {
    vector<int> v(n);
    rep(j, n) {
      if(i & 1 << j) v[j] = 1;
    }
    bool ok = true;
    rep(l, m) {
      int sum = 0;
      for(auto sv : k[l]) {
        if(v[sv]) sum++;
      }
      if(sum % 2 != p[l]) {
        ok = false;
        break;
      }
    }
    if(ok) ans++;
  }

  cout << ans << endl;
  return 0;
}