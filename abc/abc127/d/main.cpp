#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  priority_queue<pair<int, int>> d;
  rep(i, n) {
    int a;
    cin >> a;
    d.push(make_pair(a, 1));
  }
  rep(i, m) {
    int b, c;
    cin >> b >> c;
    d.push(make_pair(c, b));
  }
  ll ans = 0;
  rep(i, n) {
    pair<int, int> p = d.top(); d.pop();
    ans += p.first;
    p.second--;
    if (p.second > 0) d.push(p);
  }
  cout << ans << endl;
  return 0;
}