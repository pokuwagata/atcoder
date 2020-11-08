#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  map<int, int> mp;
  rep(i, m) {
    int l, r;
    cin >> l >> r;
    mp[l]=i+1;
    mp[r]=i+1;
  }
  int ans = 0;
  set<int> s;
  for(auto p : mp) {
    if (p.second) {
      if(s.count(p.second)) {
        s.erase(p.second);
      } else if(!s.count(p.second)) {
        s.insert(p.second);
      }
    }
    cout << s.size() << endl;
    if (s.size() == m) ans++;
  }
  cout << ans << endl;
  return 0;
}