#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, l;
  cin >> n >> l;
  vector<int> r(n);
  for(int i=1; i<=n; i++) {
    r[i-1] = l+i-1;
  }
  int s = 2e9;
  map<int, int> mp;
  int sum = 0;
  rep(i, n) sum+= r[i];
  int ans = 0;
  rep(i, n) {
    int d = abs(sum - (sum-r[i]));
    if(s > d) {
      s = d;
      ans = sum - r[i];
    }
  }
  cout << ans << endl;
  return 0;
}