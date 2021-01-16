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
  int be = 0;
  int cur = n;
  vector<pair<int, int>> a(m+1);
  rep(i, m)
  {
    cin >> a[i].first >> a[i].second;
  }
  a[m].first = a[m].second = t;

  rep(i, m+1)
  {
    int s, e;
    s = a[i].first; e = a[i].second;
    cur -= s - be;
    if(cur <= 0) {
      cout << "No" << endl;
      return 0;
    }
    cur += e-s;
    cur = min(cur, n);
    be = e;
  }
  cout << "Yes" << endl;
  return 0;
}