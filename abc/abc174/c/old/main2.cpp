#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int k;
  cin >> k;
  if(k % 2 == 0) {
    cout << -1 << endl;
    return 0;
  }
  ll x = 7;
  rep(i, 30) {
    if(x <= 9e18) {
      cout << x << endl;
      cout << i << endl;
    }
    if(x % k == 0) {
      cout << i+1 << endl;
      break;
    }
    x = 10 * x +7;
  }
  return 0;
}