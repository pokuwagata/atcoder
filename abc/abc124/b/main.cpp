#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  int ans = 0;
  int x = 0;
  rep(i, n) {
    if(x <= h[i]) ans++;
    x = max(x, h[i]);
  }
  cout << ans << endl;
  return 0;
}