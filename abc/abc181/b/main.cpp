#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  ll ans = 0;
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    ans += (b-a+1) * (a + b) / 2;
  }
  cout << ans << endl;
  return 0;
}