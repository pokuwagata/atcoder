#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll l;
  cin >> l;
  ll n = l - 1;
  ll m = n - 11;

  ll c[n+5][n+5] = {};
  c[0][0] = 1;
  for(int i=0; i<=n; i++) {
    for(int j=0; j<=i; j++) {
      c[i+1][j] += c[i][j];
      c[i+1][j+1] += c[i][j];
    }
  }

  cout << c[n][m] << endl;

  return 0;
}