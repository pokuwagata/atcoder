#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  vector<int> dp(n);
  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);
  for(int i=2; i<n; i++) {
    dp[i] = abs(h[i]-h[i-1])+dp[i-1];
    for(int j=2; j<=k; j++) {
      if(i-j<0) continue;
      dp[i] = min(dp[i], abs(h[i]-h[i-j]) + dp[i-j]);
    }
  }
  cout << dp[n-1] << endl;
  return 0;
}