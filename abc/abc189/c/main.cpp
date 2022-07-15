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

  int ans = 0;
  rep(i, n) {
    int s = INF;
    for(int j = i; j < n; j++) {
      s = min(a[j], s);
      ans = max(ans, s*(j-i+1));
    }
  }

  cout << ans << endl;
  
  return 0;
}