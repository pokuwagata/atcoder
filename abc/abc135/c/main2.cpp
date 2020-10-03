#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n+1);
  rep(i, n+1) cin >> a[i];
  rep(i, n) cin >> b[i];

  ll ans = 0;
  rep(i, n) {
    int d1 = min(a[i], b[i]);
    ans += d1;
    int d2 = min(a[i+1], b[i] - d1);
    ans += d2;
    a[i+1] -= d2;
    b[i] -= d1;
  }
  cout << ans << endl;
  return 0;
}