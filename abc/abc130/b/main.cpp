#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> l(n);
  rep(i, n) {
    cin >> l[i];
  }
  int ans = 1;
  int d = 0;
  rep(i, n) {
    d += l[i];
    if(d <= x) ans++;
  }
  cout << ans << endl;
  return 0;
}