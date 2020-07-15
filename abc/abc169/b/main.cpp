#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  ll ans = 1;
  ll mx = 1e18;
  rep(i, n) {
    if(a[i] == 0) {
      ans = 0;
      break;
    }
    if(ans > mx / a[i]) {
      ans = -1;
      break;
    }
    ans *= a[i];
  }
  cout << ans << endl;
  return 0;
}