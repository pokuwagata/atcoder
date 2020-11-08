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
  ll sum = 0;
  rep(i, n) sum += a[i];
  rep(i, n-1) {
    ll tmp = sum - (a[i]+a[i+1]);
    ll sum2 = tmp - (a[i]+a[i+1]);
    if (sum2 > sum) {
      sum = sum2;
      a[i] = -1 * a[i];
      a[i+1] = -1 * a[i+1];
    }
  }
  cout << sum << endl;
  return 0;
}