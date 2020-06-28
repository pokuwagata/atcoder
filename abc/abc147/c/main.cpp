#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  map<int, vector<pair<int,int>>> mp;
  rep(i, n) {
    int a;
    cin >> a;
    rep(j, a) {
      int x, y;
      cin >> x >> y;
      x--;
      mp[i].push_back(make_pair(x,y));
    }
  }
  vector<int> p(n, -1);
  int ans = 0;
  rep(i, 1<<n) {
    int t = 0;
    rep(j, n) {
      if(i>>j &1) {
        bool ok = true;
        for(pair<int, int> g: mp[j]) {
          if(p[g.first] != -1 && p[g.first] != g.second) {
            ok = false;
            break;
          }
          p[g.first] = g.second;
        }
        if(ok) t++;
      }
    }
    ans = max(ans, t);
  }
  cout << ans << endl;
  return 0;
}