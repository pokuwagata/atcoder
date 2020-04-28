#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main()
{
  int n, x, y;
  cin >> n >> x >> y;
  int g[n][n] ={0};
  int ans[n] ={0};
  for (int i = 0; i < n; i++)
  {
    int c = 1;
    for (int j = i + 1; j < n; j++)
    {
      g[i][j] = c;
      c++;
    }
  }

  // 更新
  int c = 1;
  for (int i = y - 1; i < n; i++)
  {
    g[x - 1][i] = c;
    c++;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      ans[g[i][j]]++;
    }
  }

  for(int i=1; i<n; i++) {
    cout << ans[i] << endl;
  }

  return 0;
}