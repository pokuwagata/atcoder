#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  int n, d;
  cin >> n >> d;
  vector<vector<int>> v(n);
  rep(i, n)
  {
    rep(j, d)
    {
      int x;
      cin >> x;
      v[i].push_back(x);
    }
  }

  int ans = 0;
  rep(i, n)
  {
    for (int j = i + 1; j < n; j++)
    {
      int s = 0;
      rep(k, d)
      {
        s += (v[i][k] - v[j][k]) * (v[i][k] - v[j][k]);
      }
      if(sqrt(s) == floor(sqrt(s))) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}