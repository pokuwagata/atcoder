#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int a, b;
  cin >> a >> b;
  vector<string> ans(2);
  rep(i, b) {
    ans[0] += to_string(a);
  }
  rep(i, a) {
    ans[1] += to_string(b);
  }
  sort(ans.begin(), ans.end());
  cout << ans[0] << endl;
  return 0;
}