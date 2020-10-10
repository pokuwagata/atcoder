#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

ll dp[105][100005];

int main() {
  int n, w;
  cin >> n >> w;
  int we[n] = {0};
  int v[n] = {0};
  rep(i,n) {
    cin >> we[i] >> v[i];
  }
  for(int i=1; i<=n; i++) {
  for(int j=1; j<=w; j++) {
      if(j >= we[i-1]) {
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-we[i-1]] + v[i-1]);
      } else {
        dp[i][j] = dp[i-1][j];
      }
    }
  }
  cout << dp[n][w] << endl;
  return 0;
}