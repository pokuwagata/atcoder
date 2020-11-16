#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  ll ans = 0;
  ll max_d = 0;
  ll pos = 0;
  ll d = 0;
  rep(i, n) {
    d += a[i];
    max_d = max(max_d, d);
    ans = max(ans, pos + max_d);
    pos += d;
  }
  cout << ans << endl; 
  return 0;
}