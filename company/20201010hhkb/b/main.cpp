#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int h, w;
  cin >> h >> w;
  int m[h][w] = {0};
  rep(i, h) {
    string s;
    cin >> s;
    rep(j, s.size()) {
      if(s[j] == '#') {
        m[i][j] = 1;
      }
    }
  }

  int ans = 0;
  rep(i, h) {
    rep(j, w-1) {
      if(m[i][j] == 0 && m[i][j+1] == 0) ans++;
    }
  }

  rep(j, w) {
    rep(i, h-1) {
      if(m[i][j] == 0 && m[i+1][j] == 0) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}