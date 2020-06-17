#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  rep(ki, k)
  {
    vector<int> b(n + 1);
    rep(i, n)
    {
      int l = max(0, i - a[i]);
      int r = min(n, i + a[i]+1);
      b[l]++;
      b[r]--;
    }

    rep(i, n)
    {
      b[i + 1] += b[i];
    }

    b.pop_back();
    if (a == b)
      break;
    a = b;
  }
  rep(i, n)
  {
    cout << a[i] << endl;
  }
  return 0;
}