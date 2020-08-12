#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

  int a, b, c;
  int k;
  bool ans = false;

void dfs(vector<int> x, int cnt) {
  cnt++;
  // cout << cnt << endl;
  // rep(i, 3) cout << x[i] << " ";
  if(x[0] < x[1] && x[1] < x[2]) {
    ans = true;
    return;
  }
  if(cnt > k) {
    return;
  }
  rep(i, 3) {
    // cout << endl;
    vector<int> tmp = x;
    tmp[i] *= 2;
    dfs(tmp, cnt);
    if(ans) break;
  }
}

int main() {
  cin >> a >> b >> c;
  cin >> k;
  vector<int> x;
  x.push_back(a);
  x.push_back(b);
  x.push_back(c);
  dfs(x, 0);
  if(ans) {
    cout << "Yes" << endl;
  } else {
  cout << "No" << endl;
  }
  return 0;
}
