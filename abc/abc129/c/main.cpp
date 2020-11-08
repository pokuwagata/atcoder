#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;
int MOD = 1e9+7;

int main() {
  int n, m;
  cin >> n >> m;
  set<int> a;
  rep(i, m) {
    int v;
    cin >> v;
    a.insert(--v);
  }
  int dp[n];
  dp[0] = 1;
  dp[1] = 2;
  if(a.count(0)) {
    dp[0] = 0;
    dp[1] = 1;
  }
  if(a.count(1)) {
    dp[1] = 0;
  }
  for(int i=0; i<n-2; i++) {
    if(a.count(i+2)) {
      dp[i+2] = 0;
    } else {
      dp[i+2] = (dp[i+1] + dp[i]) % MOD;
    }
  }
  cout << dp[n-1] << endl;
  return 0;
}