#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  int C;
  cin >> C;

  vector<int> d(INF);

  rep(i, n) {
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b) {
      d[a]+=c;
    } else {
      for(int i=a; i<=b; i++) d[i]+=c;
    }
  }

  ll ans = 0;
  rep(i, d.size()) {
    ans += min(C, d[i]);
  }

  cout << ans << endl;
  return 0;
}