#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  rep(i, n) {
    cin >> x[i];
  }
  int ans = INF;
  for(int i=1; i<=100; i++) {
    int d = 0;
    rep(j, n) {
      d += pow(i-x[j],2);
    }
    ans = min(d, ans);
  }
  cout << ans << endl;
  return 0;
}