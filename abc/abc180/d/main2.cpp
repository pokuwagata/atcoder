#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  // cout << (ll)2e18 << endl;
  ll x, y;
  cin >> x >> y;
  int a, b;
  cin >> a >> b;

  ll cnt = 0;
  while(x <= (ll)2e18 / a && x+b > x*a && x*a<y) {
    x *= a;
    cnt++;
  }

  ll ans = (y - x - 1) / b + cnt;
  cout << ans << endl;
  return 0;
}