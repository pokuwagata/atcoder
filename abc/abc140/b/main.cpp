#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int>a(n);
  rep(i,n) cin >> a[i];
  vector<int>b(n);
  rep(i,n) cin >> b[i];
  vector<int>c(n-1);
  rep(i,n-1) cin >> c[i];

  int ans = 0;
  rep(i, n) {
    ans += b[a[i]-1];
    if((a[i-1] + 1 ) == a[i]) ans+= c[a[i-1]-1];
  }
  cout << ans << endl;
  return 0;
}