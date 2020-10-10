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
  rep(i,n) {
    r[i] = l + i;
  }
  int sum = 0;
  rep(i, n) sum += r[i];
  int ans = 2e9;
  rep(i, n) {
    int t = sum - r[i];
    if(abs(sum - ans) > abs(sum - t)) ans = t;
  }
  cout << ans << endl;
  return 0;
}