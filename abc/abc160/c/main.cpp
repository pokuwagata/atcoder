#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int k, n;
  cin >> k >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll d1 = a[n-1] - a[n-2];
  ll d2 = a[n-2] + k - a[n-1];
  cout << min(d1, d2) << endl;
  return 0;
}