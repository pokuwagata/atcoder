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
  rep(i, n) {
    if(i==0)continue;
    if(a[i-1] <= a[i]) continue;
    ans += a[i-1] - a[i];
    a[i] = a[i-1];
  }
  cout << ans << endl;
  return 0;
}