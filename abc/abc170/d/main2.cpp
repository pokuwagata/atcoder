#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

set<int> divisor(int n) {
  set<int> ret;
  for(int i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ret.insert(i);
      if(i * i != n) ret.insert(n / i);
    }
  }
  return ret;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int ans = 0;
  rep(i, n) {
    set<int> yakusu = divisor(a[i]);
    bool ok = true;
    rep(j, n) {
      if(i != j && yakusu.count(a[j])) {
        ok = false;
        break;
      }
    }
    if(ok) ans++;
  }
  cout << ans << endl;

  return 0;
}