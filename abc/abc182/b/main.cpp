#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int m = 0;
  rep(i, n) {
    cin >> a[i];
    m = max(m, a[i]);
  }
  int cntm = 0;
  int ans = 0;
  for(int i=2; i<=m; i++) {
    int cnt = 0;
    rep(j, n) {
      if(a[j]%i == 0) cnt++;
    }
    if (cntm <= cnt) {
      ans = i;
      cntm = max(cntm, cnt);
    }
  }

  cout << ans << endl;
  return 0;
}