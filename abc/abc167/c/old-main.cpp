#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

vector<vector<int>> a;
vector<int>c;
int ans = 2000000000;
int n, m, x;

bool check(vector<int>all) {
  vector<int> score(m);
  for(int x : all) {
    rep(i, m) {
      score[i] += a[x-1][i];
    }
  }
  for(int y : score) {
    if(y < x) return false;
  }
  return true;
}

void dfs(vector<int>all) {

  if(check(all)) {
    int now = 0;
    for(int x :all) {
      now += c[x-1];
    }
    ans = min(ans, now);
    return;
  }
  for(int i= all.back()+1; i<=n; i++) {
    all.push_back(i);
    dfs(all);
    all.pop_back();
  }
}

int main() {
  cin >> n >> m >> x;
  a = vector<vector<int>>(n);
  c = vector<int>(n);
  rep(i,n) {
    cin >> c[i];
    vector<int> tmp(m);
    // rep(j,m) cin >> tmp[j];
    rep(j,m) cin >> a[i][j];
    a[i] = tmp;
  }
  for(int i=1; i<=n; i++) {
    dfs(vector<int>(1,i));
  }
  if(ans == 2000000000) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }

  return 0;
}