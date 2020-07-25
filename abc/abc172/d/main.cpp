#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

ll g(ll n) {
  return n*(n+1)/2;
}

int main() {
  int n;
  cin >> n;
  ll ans = 0;
  for(int i=1;i<=n;i++) {
    ans += i * g(n/i);
  }
  cout << ans << endl;
  cout << g(1e7) << endl;
  return 0;
}