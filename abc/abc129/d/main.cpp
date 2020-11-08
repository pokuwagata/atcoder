#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h) cin >> s[i];
  vector<int> hc(h);
  vector<int> wc(w);
  int mw = INF;
  rep(i, h) {
    rep(j, w) {
      if(s[i][j] == '#') wc[i]++;
    }
    mw = min(mw, wc[i]);
  }
  int mh = INF;
  rep(i, w) {
    rep(j, h) {
      if(s[j][i] == '#') hc[i]++;
    }
    mh = min(mh, hc[i]);
  }
  int ans = h+w - mw - mh - 1;
  cout << ans << endl;
  return 0;
}