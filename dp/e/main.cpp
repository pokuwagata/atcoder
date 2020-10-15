#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

ll dp[105][100100];

int main() {
  int n, w;
  cin >> n >> w;
  int we[n] = {0};
  int v[n] = {0};
  rep(i,n) {
    cin >> we[i] >> v[i];
  }

  rep(i,105) {rep(j, 100100) {
    dp[i][j] = INF;
  }}
  dp[0][0] = 0;

  for(int i=0; i<n; i++) {
    for(int j=0; j<=100100; j++) {
      if(j >= v[i]) {
        dp[i+1][j] = min(dp[i][j], dp[i][j-v[i]] + we[i]);
      } else {
        dp[i+1][j] = dp[i][j];
      }
    }
  }

  int ans = 0;
  rep(i, 100100) {
    if(dp[n][i] <= w) ans = i;
  }
  cout << ans << endl;
  return 0;
}