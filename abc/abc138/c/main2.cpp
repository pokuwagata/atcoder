#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) cin >> v[i];
  sort(v.begin(), v.end());
  double ans = v[0];
  for(int i=1; i<n; i++) {
    ans = (ans + v[i]) / 2;
  }
  cout << ans << endl;
  return 0;
}