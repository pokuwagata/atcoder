#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  vector<int> a(5);
  rep(i, 5) cin >> a[i];
  int m = INF;
  int ans = 0;
  rep(i, 5) {
    ans += a[i];
    int x = a[i] % 10;
    if(x != 0) {
      ans += 10 - x;
      m = min(x, m);
    }
  }
  if(m != INF) {
    ans -= (10 - m);
  }
  cout << ans << endl;
  return 0;
}