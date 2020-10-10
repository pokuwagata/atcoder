#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  int ans = 0;
  rep(i, n-2) {
    int m1 = min(p[i], p[i+1]);
    m1 = min(m1, p[i+2]);
    int m2 = max(p[i], p[i+1]);
    m2 = max(m2, p[i+2]);
    if(m1 < p[i+1] && p[i+1] < m2) ans++;
  }
  cout << ans << endl;
  return 0;
}