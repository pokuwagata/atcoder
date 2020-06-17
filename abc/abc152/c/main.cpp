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
  int ans = 0;
  int cur = 1e9;
  rep(i, n) {
    cur = min(cur, p[i]);
    if(cur == p[i]) ans++;
  }
  cout << ans << endl;
  return 0;
}