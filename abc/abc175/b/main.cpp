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
  rep(i, n-2) {
    for(int j=i+1; j<n-1; j++) {
      for(int k=j+1; k<n; k++) {
        if(a[i] == a[j] || a[j] == a[k] || a[k] == a[i]) continue;
        if(a[i] + a[j] > a[k] && a[j] + a[k] > a[i] && a[k] + a[i] > a[j]) ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}