#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  ll ans = 1000;
  int cnt = 0;
  rep(i, n-1) {
    if(p[i+1]>p[i]) {
      ans += (p[i+1]-p[i]) * (ans / p[i]);
    }
  }
  cout << ans << endl;
  return 0;
}