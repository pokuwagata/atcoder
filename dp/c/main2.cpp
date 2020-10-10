#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> p(n, vector<int>(3));
  rep(i, n) {
    rep(j,3) cin >> p[i][j];
  }
  vector<vector<int>> dp(n, vector<int>(3));

  rep(i, 3) {
    dp[0][i] = p[0][i];
  }
  rep(i, n-1) {
    rep(j, 3) {
      rep(k, 3) {
        if(j == k) continue;
        dp[i+1][j] = max(dp[i+1][j], dp[i][k] + p[i+1][j]);
      }
    }
    // dp[i+1][0] = max(dp[i][1] + p[i+1][0], dp[i][2] + p[i+1][0]);
    // dp[i+1][1] = max(dp[i][0] + p[i+1][1], dp[i][2] + p[i+1][1]);
    // dp[i+1][2] = max(dp[i][0] + p[i+1][2], dp[i][1] + p[i+1][2]);
  }
 
  int ans = 0;
  rep(i, 3) {
    ans = max(ans, dp[n-1][i]);
  }
  cout << ans << endl;
  return 0;
}