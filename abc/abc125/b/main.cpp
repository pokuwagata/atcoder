#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> c(n);
  rep(i,n) cin >> v[i];
  rep(i,n) cin >> c[i];
  int ans = 0;
  rep(i, 1<<n) {
    int x, y;
    x = y = 0;
    rep(j, n) {
      if (i & 1 << j) {
        x += v[j]; y+= c[j];
      }
    }
    ans = max(ans, x-y);
  }
  cout << ans << endl;
  return 0;
}