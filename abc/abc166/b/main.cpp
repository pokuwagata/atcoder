#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, k) {
    int d, tmp;
    cin >> d;
    rep(i, d) {
      cin >> tmp;
      a[tmp-1]++;
    }
  }

  int ans = 0;
  rep(i,n) {
    if(a[i] == 0) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}