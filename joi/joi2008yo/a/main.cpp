#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  int x;
  cin >> x;
  int ans = 0;
  x = 1000 - x;
  if (x >= 500)
  {
    ans += x / 500;
    x %= 500;
  }
  if (x >= 100)
  {
    ans += x / 100;
    x %= 100;
  }
  if (x >= 50)
  {
    ans += x / 50;
    x %= 50;
  }
  if (x >= 10)
  {
    ans += x / 10;
    x %= 10;
  }
  if (x >= 5)
  {
    ans += x / 5;
    x %= 5;
  }
  ans += x;
  cout << ans << endl;

  return 0;
}