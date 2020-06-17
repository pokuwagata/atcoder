#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<P> p(m);
  rep(i, m) {
    cin >> p[i].first >> p[i].second;
  }
  rep(x, 1000) {
    int dx = x / 10;
    vector<int> d(1, x%10);
    // int keta = 1;
    while(dx) {
      // keta++;
      d.push_back(dx%10);
      dx /= 10;
    }
    // if(keta != n) continue;
    reverse(d.begin(), d.end());
    bool ok = true;
    rep(i, m) {
      if(d[p[i].first-1] != p[i].second) ok = false;
    }
    if(ok) {
      cout << x << endl;
      return 0;
    }
  }
  cout << -1 << endl;

  return 0;
}