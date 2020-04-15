#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main()
{
  int n, ans = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
      continue;
    int c = 0;
    for (int j = 1; j <= i; j++)
    {
      if (i % j == 0)
        c++;
    }
    if(c == 8) ans++;
  }
  cout << ans << endl;
  return 0;
}