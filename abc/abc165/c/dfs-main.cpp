#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int n, m, q, ans;
vector<int>a, b, c, d;

void dfs(vector<int> A) {
  if(A.size() == n +1) {
    int now = 0;
    rep(i, q) {
      if(A[b[i]]-A[a[i]] == A[c[i]]) {
        now += d[i];
      }
    }
    ans = max(now, ans);
    return;
  }

  A.push_back(A.back());
  while(A.back() <= m) {
    dfs(A);
    A.back()++;
  }
}

int main() {
  cin >> n >> m >> q;
  a = b = c = d = vector<int>(q);
  rep(i, q) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }
  vector<int>A(1,1);
  dfs(A);
  cout << ans << endl;
  return 0;
}