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
  vector<int> b(n);
  rep(i, n) {
    cin >> a[i]
  }
  ll ans;
  rep(i, n) {
    ans += a[i]*b[i];
  }
  if (ans == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}