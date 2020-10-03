#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  rep(i, m) {
    sort(a.begin(), a.end());
    a[n-1] /= 2;
  }
  ll ans = 0;
  rep(i,n) ans+=a[i];
  cout << ans << endl;
  return 0;
}