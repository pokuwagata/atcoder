#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  int n, m, t;
  cin >> n >> m >> t;
  int cur = n;
  vector<pair<int, int>> a(m);
  rep(i, m)
  {
    cin >> a[i].first >> a[i].second;
  }
  sort(a.begin(), a.end());

  int j = 0;
  for (int i = 0; i < t; i++)
  {
    if (j < m && a[j].first <= i && a[j].second > i)
    {
      if (n != cur) cur++;
    }
    else
    {
      cur--;
    }
    if (a[j].second == i)
      j++;
    if (cur == 0)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}