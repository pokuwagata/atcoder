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
  for (int i = 1; i <= n; i++)
  {
    int ans = 0;
    for (int x = 1; x < 100; x++)
    {
      for (int y = 1; y < 100; y++)
      {
        for (int z = 1; z < 100; z++)
        {
          int v = x * x + y * y + z * z + x * y + y * z + z * x;
          if (v > i)
            break;
          if (v == i)
            ans++;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}