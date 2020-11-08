#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll n;
  cin >> n;
  set<ll> ans;
  for(ll i=1; i*i<=n; i++) {
    if(n%i != 0) continue;
    ans.insert(i);
    ans.insert(n/i);
  }
  for(ll x : ans ) {
    cout << x << endl;
  }
  return 0;
}