#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  int d[n][n];
  rep(i, n) {
    rep(j, n) {
      cin >> d[i][j];
    }
  }
  rep(i, n) a[i] = i;
  int ans = 0;
  do {
    if(a[0] != 0) continue;
    int sum = 0;
    rep(i, n-1) {
      sum += d[a[i]][a[i+1]];
    }
    sum += d[a[n-1]][0];
    if(sum == k) ans++;
  }
  while (next_permutation(a.begin(), a.end()));

  cout << ans << endl;
  return 0;
}