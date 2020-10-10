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
  vector<int> dp(n, INF);
  dp[0] = 0;
  for(int i=0; i<n; i++) {
    for(int j=1; j<=k; j++) {
      if(i+j>n-1) continue;
      dp[i+j] = min(dp[i] + abs(h[i+j] - h[i]), dp[i+j]);
    }
  }
  cout << dp[n-1] << endl;
  return 0;
}