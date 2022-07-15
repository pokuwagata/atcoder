#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n; ll x;
  cin >> n >> x;
  ll total = 0;
  rep(i, n) {
    ll v, p;
    cin >> v >> p;
    total += v * p;
    if(total > x * 100) {
      cout << i+ 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}