#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1000000000;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  ll ans = -2e18;
  ans = max((ll)a * c, ans);
  ans = max((ll)a * d, ans);
  ans = max((ll)b * c, ans);
  ans = max((ll)b * d, ans);
  cout << ans << endl;
  return 0;
}