#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll n, d;
  cin >> n >> d;
  ll d2;
  int ans = 0;
  rep(i, n) {
    ll x, y;
    cin >> x >> y;
    d2 = x*x + y*y;
    if(d2 <= d*d) ans++;
  }
  cout << ans << endl;
  return 0;
}