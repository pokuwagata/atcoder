#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int h, w;
  cin >> h >> w;
  int a[h][w] = {};
  int base = 100;
  rep(i, h) {
    rep(j, w) {
      cin >> a[i][j];
      base = min(a[i][j], base);
    }
  }
  int ans = 0;

  rep(i, h) {
    rep(j, w) {
      ans += a[i][j] - base;
    }
  }

  cout << ans << endl;

  return 0;
}