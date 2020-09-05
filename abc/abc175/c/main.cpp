#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll x, k, d;
  cin >> x >> k >> d;
  x = abs(x);
  ll ans;
  if(x/d >= k) {
    ans = x - k * d;
  } else {
    k -= x/d;
    x = x%d;
    if(k%2 == 1) x = abs(x-d);
    ans = x;
  }
  cout << ans << endl;
  return 0;
}