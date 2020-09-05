#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  string s, t;
  cin >> s >> t;
  int ans = INF;
  rep(i, s.size()-t.size()+1) {
    int cnt = 0;
    rep(j, t.size()) {
      if(s[i+j] == t[j]) continue;
      else cnt++;
    }
    ans = min(cnt, ans);
  }
  cout << ans << endl;
  return 0;
}