#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  for(ll x=1e17; x < 1e18; x++) {
    if(x % (ll)1e3 == 0) cout << x << endl;
    string n = to_string(x);
    int k = n.size();
    vector<pair<int, bool>> d(k);

    bool ok = true;
    rep(i, k) {
      if(d[i].first == 0) ok = false;
    }
    if(!ok) continue;

    rep(i, k) d[i].first = n[i] - '0';

    rep(i, k) {
      if(d[i].first % 3 == 0) d[i].second = true;
    }

    for(int i=0; i<k; i++) {
      if(d[i].second) continue;
      for(int j=i+1; j<k; j++) {
        if(d[j].second) continue;
        if((d[i].first + d[j].first)%3 == 0) {
          d[i].second = true;
          d[j].second = true;
          break;
        }
      }
    }

    ll ans = 0;
    rep(i, k) {
      if(d[i].second) ans += d[i].first * pow(10, k-1-i);
    }
    if(ans % 3 != 0) {
      cout << ans << " " << x << endl;
      return 0;
    }
  }

  return 0;
}