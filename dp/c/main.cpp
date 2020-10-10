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
  vector<int> dp(n);
  int b = 0;
  rep(i, n) {
    if(i == 0) {
      rep(j, 3) {
        if(dp[i] < p[i][j]) {
          dp[i] = p[i][j];
          b = j;
        }
      }
      printf("before: %d, dp: %d\n", b, dp[i]);
      continue;
    }
    rep(j, 3) {
      printf("b: %d, j: %d\n",b, j);
      // なぜ b == j が動作しない？ (下で更新してるから)
      if(b == j) {
        puts("hoge");
        continue;
      }
      if(dp[i] < dp[i-1] + p[i][j]) {
        dp[i] = dp[i-1] + p[i][j];
        b = j;
      }
    }
    printf("before: %d, dp: %d\n", b, dp[i]);
  }
  cout << dp[n-1] << endl;
  return 0;
}