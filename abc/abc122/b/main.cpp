#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

bool check(string s)
{
  bool ok = true;
  rep(i, s.size())
  {
    if (!(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T'))
    {
      ok = false;
      break;
    }
  }
  return ok;
}

int main()
{
  string s;
  int l = 0;
  cin >> s;
 cout << s.substr(0, 0);
  // rep(i, s.size())
  // {
  //   rep(j, s.size())
  //   {
  //     string s2 = s.substr(i, j + 1);
  //     if (check(s2))
  //     {
  //       l = max(l, (int)s2.size());
  //     }
  //   }
  // }
  // cout << l << endl;
  return 0;
}