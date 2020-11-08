#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

ll x(ll x, int n) {
  ll ans = 1;
  rep(i, n) {
    ans *= x;
  }
  return ans;
}

int main() {
  ll n;
  cin >> n;
  printf("%ld\n", x(3, 38));
  printf("%lf\n", pow(3, 38));
  rep(i, 39) {
    rep(j, 27) {
      if(i == 0 || j == 0) continue;
      if(x(3, i) + x(5, j) == n) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
  cout << -1 << endl;
  return 0;
}