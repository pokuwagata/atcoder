#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  string c;
  cin >> c;
  int r, w;
  r = w = 0;
  rep(i, n) {
    if(c[i] == 'R') r++;
  }
  int ans = max(r,w);
  rep(i, n) {
    if(c[i] == 'R') r--;
    else w++;
    int m = max(r, w);
    ans = min(ans, m);
  }
  cout << ans << endl;

  return 0;
}