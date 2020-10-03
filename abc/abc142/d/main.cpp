#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll a, b;
  cin >> a >> b;
  ll m = min(a, b);
  vector<int> y;
  for(int i=1; i <= m; i++) {
    if(a % i == 0 && b % i == 0) {
      y.push_back(i);
    }
  }
  // rep(i, y.size()) cout << y[i] << endl;
  int ans = 0;
  rep(i, y.size()) {
    rep(j, y.size()) {
      if(i >= j) continue;
      for(int k=1; k<=y[i])
    }
  }
  cout << ans << endl;
  return 0;
}