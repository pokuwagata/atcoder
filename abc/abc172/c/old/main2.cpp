#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int>a(n);
  vector<int>b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  int ans = 0;
  int i, j;
  i = j = 0;
  while(k > 0) {
    if(k < min(a[i], b[j])) break;
    int av = a[i];
    int bv = b[j];
    if(av >= bv) {
      k -= bv;
      j++;
      ans++;
    } else {
      k -= av;
      i++;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}