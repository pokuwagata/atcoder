#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  sort(h.begin(), h.end(), greater <>());
  k = min(k,n);
  h.erase(h.begin(), h.begin() + k);
  ll ans = 0;
  rep(i, h.size()) ans+=h[i];
  cout << ans << endl;
  return 0;
}