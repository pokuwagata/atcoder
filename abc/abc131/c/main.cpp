#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

ll a, b, c, d;

ll f(ll x) {
  return b/x - (a-1)/x;
}

int main() {
  cin >> a >> b >> c >> d;
  ll ans = b - a + 1 - f(c) - f(d) + f(lcm(c, d));
  cout << ans << endl; 
  return 0;
}