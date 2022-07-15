#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, k;
  cin >> n >> k;
  map<int, int> mp;
  rep(i, n) {
    int v;
    cin >> v;
    mp[v]++; 
  }
  int m[mp.size()] = {0};
  rep(i, mp.size()) {
    if(!mp.count(i)) continue;
    m[i] = min(k, mp[i]);
    if(i==0) continue;
    m[i] = min(m[i], m[i-1]);
  }

  ll ans = 0;
  rep(i, mp.size()-1) {
    if(m[i+1] != m[i]) {
      ans += (i+1) * (m[i] - m[i+1]);
    }
  }
  ans += (ll)m[mp.size()-1] * mp.size();
  
  cout << ans << endl;
  return 0;
}