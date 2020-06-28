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
  map<int, int> mp;
  ll sum = 0;
  rep(i, n) {
    cin >> a[i];
    sum += a[i];
    mp[a[i]-1]++;
  }
  int q;
  cin >> q;
  rep(i, q) {
    ll b, c;
    cin >> b >> c;
    int bi = b - 1;
    int ci = c - 1;
    if(mp.count(bi)) {
      sum -= b * mp[bi];
      sum += c * mp[bi];
      mp[ci] += mp[bi];
      mp[bi] = 0;
    }
    cout << sum << endl;
  }
  return 0;
}