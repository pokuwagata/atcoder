#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main()
{
  int K;
  ll sum = 0;
  cin >> K;
  rep(i, K)
      rep(j, K)
          rep(k, K)
  {
    sum += gcd(gcd(i, j), k);
  }
  cout << sum << endl;
  return 0;
}