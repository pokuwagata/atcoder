#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  int k;
  cin >> k;
  vector<ll> q;
  for (int i = 1; i <= 9; i++)
  {
    q.push_back(i);
  }
  while (1)
  {
    vector<ll> old;
    swap(old, q);
    int l = old.size();
    if (l < k)
    {
      for (ll x : old)
      {
        for (int i = -1; i <= 1; i++)
        {
          int y = x % 10 + i;
          if (y < 0 || y > 9)
            continue;
          q.push_back(x * 10 + y);
        }
      }
      k -= l;
    }
    else
    {
      cout << old[k - 1] << endl;
      break;
    }
  }

  return 0;
}