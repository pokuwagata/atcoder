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
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  int ans = 0;
  rep(i, n) {
    bool ok = true;
    rep(j, n) {
      if(i != j && a[i] % a[j] == 0) {
        ok = false;
        break;
      }
    }
    if(ok) ans++;
  }
  cout << ans << endl;
  return 0;
}