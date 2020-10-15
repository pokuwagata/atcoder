#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.rbegin(), a.rend());
  int ans = gcd(a[0], a[1]);
  for(int i=2; i<n; i++) {
    ans = gcd(ans, a[i]);
  }
  cout << ans << endl;
  return 0;
}