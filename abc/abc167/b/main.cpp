#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main()
{
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  if (a >= k) {
    cout << k << endl;
  }
  if (a + b >= k)
  {
    cout << a << endl;
  }
  if (a + b < k)
  {
    cout << a - (k - a - b) << endl;
  }
  return 0;
}