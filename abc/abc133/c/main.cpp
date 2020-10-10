#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int l, r;
  cin >> l >> r;
  int l2 = min(l % 2019, r % 2019);
  int r2 = max(l % 2019, r % 2019);
  int ans = 2019;
  cout << l2 << " " << r2 << endl;
  for(int i=l2; i<=r2; i++) {
    for(int j=i+1; j<=r2; j++) {
      ans = min(ans, i*j % 2019);
    }
  }
  if(ans == 2019) ans = 0;
  cout << ans << endl;
  return 0;
}