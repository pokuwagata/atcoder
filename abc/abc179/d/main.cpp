#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;
int m = 998244353;

int main() {
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> d(k);
  rep(i, k) cin >> d[i].first >> d[i].second;
  set<int> s;
  rep(i, k) {
    for(int j=d[i].first; j<=d[i].second; j++) {
      s.insert(j);
    }
  }
  
  queue<int> q;
  q.push(n-1);

  ll ans = 0;
  while(!q.empty()) {
    int v = q.front();
    cout << "v:" << v << endl;
    q.pop();
    for(int t : s) {
      // cout << "t:" << t << endl;
      int next = v - t;
      // cout << "next:" << next << endl;
      if(next > 0) {
        q.push(next);
      }
      if(next == 0) ans = (ans % m + 1);
    }
  }

  cout << ans % m << endl;
  
  return 0;
}