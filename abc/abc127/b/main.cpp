#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int r, d, x;
  cin >> r >> d >> x;
  int ans = x;
  rep(i, 10) {
    ans = r * ans - d;
    cout << ans << endl;
  }
  return 0;
}