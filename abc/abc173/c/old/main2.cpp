#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  int h, w, k;
  cin >> h >> w >> k;
  vector<vector<int>> m(h);
  int ans = 0;
  rep(i, h)
  {
    vector<int> wt(w);
    rep(j, w)
    {
      char c;
      cin >> c;
      if (c == '#')
        wt[j] = 1;
    }
    m[i] = wt;
  }

  int temp = 0;
  rep(i, 1 << h)
  {
    vector<vector<int>> mp(h);
    mp = m;
    rep(j, h)
    {
      if (i >> j & 1)
      {
        rep(k, w) mp[j][k] = 2;
      }
    }
    rep(j, 1 << w)
    {
      vector<vector<int>> mp2(h);
      mp2 = mp;
      rep(k, w)
      {
        if (j >> k & 1)
        {
          rep(l, h) mp2[l][k] = 2;
        }
      }

      int black = 0;
      rep(j, h)
      {
        rep(k, w)
        {
          if (mp2[j][k] == 1)
            black++;
        }
      }

      if (black == k) {
        cout << i << endl;
        cout << j << endl;
        ans++;
      }

      cout << "---" << endl;
      rep(i, h)
      {
        rep(j, w) printf("%d ", mp2[i][j]);
        cout << endl;
      }
    }
  }

  cout << ans << endl;
  cout << temp << endl;

  return 0;
}