#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  int ans = 0;
  rep(i, n) {
    bool ok = true;
    rep(j, i) {
      if(p[i]>p[j]) {
        ok = false;
        break;
      }
    }
    if(ok) ans++;
  }
  cout << ans << endl;
  return 0;
}