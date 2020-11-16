#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  vector<pair<int, int>> qs(q);
  rep(i, q) cin >> qs[i].first >> qs[i].second;

  vector<int> m(n);
  rep(i, n) {
    if(i == 0) continue;
    if(s[i-1] == 'A' && s[i] == 'C') m[i] = m[i-1] + 1;
    else m[i] = m[i-1];
  }

  rep(i, q) {
    int ans = m[qs[i].second-1] - m[qs[i].first-1];
    cout << ans << endl;
  }
  return 0;
}