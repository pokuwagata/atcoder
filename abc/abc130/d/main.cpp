#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll s = 0;
  ll cnt = 0;
  int j = 0;
  rep(i, n) {
    while(j < n && s+a[j] < k) {
      s += a[j];
      j++;
    }
    s -= a[i];
    cnt += j - i;
  }
  cout << (ll)n*(n+1)/2 - cnt << endl;
  return 0;
}