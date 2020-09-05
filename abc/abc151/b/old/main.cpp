#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, k, m;
  cin >> n >> k >> m;
  int total = 0;
  rep(i, n-1) {
    int a;
    cin >> a;
    total += a;
  }
  int ans = max(m * n - total, 0);
  if(ans <=k) cout << ans << endl;
  else cout << -1 << endl;
  return 0;
}