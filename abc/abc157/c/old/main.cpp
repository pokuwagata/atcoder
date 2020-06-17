#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  rep(i, m) {
    int s, c;
    cin >> s >> c;
    s--;
    if(n>1 && s==0 && c == 0) {
      cout << -1 << endl;
      return 0;
    }
    if(a[s] != c && a[s] != 0) {
      cout << -1 << endl;
      return 0;
    }
    a[s] = c;
  }
  int ans = 0;
  rep(i, m) {
    ans += a[i] * pow(10, m-1-i);
  }

  cout << ans << endl;

  return 0;
}