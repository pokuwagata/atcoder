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
  sort(a.rbegin(), a.rend());
  int t = n -1;
  ll ans = 0;
  rep(i, n) {
    int lim = 2;
    if(i == 0) lim = 1;
    rep(j, lim) {
      if(t > 0) {
        ans += a[i];
        t--;
      }
    }
  }
  cout << ans << endl;
  return 0;
}