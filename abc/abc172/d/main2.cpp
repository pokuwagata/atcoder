#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> a(n+1);
  for(int i=1; i<=n; i++) {
    for(int j = i; j<=n; j+=i) {
      a[j]++;
    }
  }
  ll ans = 0;
  rep(i, n+1) {
    ans += (ll)i*a[i];
  }
  cout << ans << endl;
  return 0;
}