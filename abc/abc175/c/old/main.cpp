#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll x, k, d;
  cin >> x >> k >> d;
  ll m, dd;
  x = abs(x);
  if(x%d > abs(x%d -d)) {
    m = x%d - d;
    dd = abs(x - m);
  } else {
    m = x%d;
    dd = x - m;
  }
  if(dd / d <= k) {
    k -= dd / d;
    if(k%2 == 0) cout << m << endl;
    else cout << abs(m-d) << endl;;
  } else {
    rep(i, k) {
      x -=d;
    }
    cout << x << endl;
  }

  return 0;
}