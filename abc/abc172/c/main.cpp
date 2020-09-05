#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<ll> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  ll t = 0;
  rep(i, m) t+=b[i];
  int j = m;
  int ans = 0;
  rep(i, n+1) {
    while(j>0 && k < t) {
      j--;
      t -= b[j];
    }
    if(k < t) break;
    ans = max(ans, i+j);
    if(i == n) break;
    t += a[i];
  }

  cout << ans << endl;

  return 0;
}