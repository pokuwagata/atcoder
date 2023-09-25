#include <bits/stdc++.h>
#define rep(i,n) for(int i=1; i <= (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int h, w, r, c;
  cin >> h >> w >> r >> c;
  
  int ans = 0;
  rep(i, h) {
    rep(j, w) {
      if(abs(r-i) + abs(c-j) == 1) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}