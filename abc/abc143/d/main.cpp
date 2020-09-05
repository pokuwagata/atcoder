#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> l(n);
  rep(i,n) cin >> l[i];
  int ans = 0;
  rep(i, n){
    rep(j, n){
      rep(k, n){
        if(!(i < j && j < k)) continue;
        if(l[i] < l[j] + l[k] && l[j] < l[i] + l[k] && l[k] < l[i] + l[j]) ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}