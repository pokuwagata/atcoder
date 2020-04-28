#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main()
{
  int c, t = 0, h = 0;
  cin >> c;
  rep(i, c)
  {
    string a, b;
    cin >> a >> b;
    // int res = a.compare(b);
    // if (res > 0)
    if (a > b)
    {
      t += 3;
    }
    // else if (res < 0)
    else if (a < b)
    {
      h += 3;
    }
    else
    {
      t++;
      h++;
    }
  }
  cout << t << ' ' << h << endl;
  return 0;
}