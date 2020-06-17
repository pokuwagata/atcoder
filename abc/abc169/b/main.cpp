#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;
ll mx = 1e18;

int main() {
  int n;
  cin >> n;
  bool ng = false;
  ll ans = 1;
  rep(i, n) {
    ll a;
    cin >> a;
    if(a==0) {
      cout << 0 << endl;
      return 0;
    }
    if(ng || mx/ans <a) {
      ng = true;
    }
    ans *= a;
  }
  if(ng) {cout << -1 << endl;}
  else {cout << ans << endl;}

  return 0;
}