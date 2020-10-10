#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

ll dp[105][100005];
int main()
{
  int n, w;
  cin >> n >> w;
  int we[n] = {0};
  int v[n] = {0};
  rep(i, n)
  {
    cin >> we[i] >> v[i];
  }
  // ll dp[n+1][w+1] = {};
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j <= w; j++)
  //   {
  //     if (j >= we[i])
  //     {
  //       dp[i + 1][j] = max(dp[i][j], dp[i][j - we[i]] + v[i]);
  //     }
  //     else
  //     {
  //       dp[i + 1][j] = dp[i][j];
  //     }
  //   }
  // }
  // cout << dp[n][w] << endl;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= w; j++)
    {
      printf("%d ", dp[i][j]);
    }
    printf("\n");
  }

  return 0;
}