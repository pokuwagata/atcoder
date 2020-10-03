#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  int n;
  cin >> n;
  vector<pair<int, int>> d(n);
  rep(i, n)
  {
    cin >> d[i].first >> d[i].second;
  }
  bool ok = false;
  rep(i, n - 2)
  {
    if (d[i].first == d[i].second && d[i + 1].first == d[i + 1].second && d[i + 2].first == d[i + 2].second)
    {
      ok = true;
      break;
    }
  }
  if (ok)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}