#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  vector<int> dp(n);
  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);
  for(int i=2; i<n; i++) {
    dp[i] = min(abs(h[i]-h[i-1])+dp[i-1], abs(h[i]-h[i-2]) + dp[i-2]);
  }
  cout << dp[n-1] << endl;
  return 0;
}