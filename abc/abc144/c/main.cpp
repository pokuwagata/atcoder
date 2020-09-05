#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  ll n;
  cin >> n;
  vector<ll> y;
  ll t = n;
  for (int i = 2; i * i <= n; i++)
  {
    if (t % i == 0)
      y.push_back(i);
    t /= i;
  }
  rep(i, n) cout << y[i] << endl;
  return 0;
}