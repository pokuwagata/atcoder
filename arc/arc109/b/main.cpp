#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll n;
  cin >> n;

  ll ans = (-1 + sqrtl(9+8*n))/2;
  cout << n + 1 - ans << endl;

  return 0;
}
