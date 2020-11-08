#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll n, k;
  cin >> n >> k;
  ll ans = 0;
  for(ll a = 2; a <= 2 * n; a++) {
    ll b = a - k; 
    if (b < 2 || b > 2*n) continue;
    if (a <=n) {
      if(b <=n) {
        ans += (a-1) * (b-1);
      } else {
        ans += (a-1) * (2 * n - b + 1);
      }
    } else {
      if(b <=n) {
        ans += (2 * n - a + 1) * (b-1);
      } else {
        ans += (2 * n - a + 1) * (2 * n - b + 1);
      }
    }
  }
  cout << ans << endl;
  return 0;
}