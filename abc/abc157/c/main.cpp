#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int>mp(m);
  rep(i, m) {
    int s, c;
    cin >> s >> c;
    s--;
    if(mp[s] != 0 && mp[s] != c) {
      cout << -1 << endl;
      return 0;
    }
    mp[s] = c;
  }
  rep(i, 1000) {
    string s = to_string(i);
    bool ok = true;
    rep(j, s.size()) {
      if(mp[j] == 0) continue;
      if(int(s[j]) != mp[j]) ok = false;
    }
    if(ok) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}