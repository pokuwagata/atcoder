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
  string s;
  cin >> s;
  int ans = 0;
  rep(i, n + 1)
  {
    if (i <= 1 || i % 2 != 0)
      continue;
    rep(j, n - i + 1)
    {
      string t = s.substr(j, i);
      cout << t << endl;
      map<char, int> mp;
      rep(k, t.size())
      {
        mp[t[k]]++;
      }
      for (auto v : mp)
      {
        cout << v.first << " " << v.second << endl;
      }
      if (mp['A'] == mp['T'] && mp['C'] == mp['G'])
      {
        ans++;
        cout << "ok" << endl;
      }
    }
  }
  cout << ans << endl;
  return 0;
}