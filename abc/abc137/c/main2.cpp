#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  rep(i, n) {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    mp[s]++;
  }
  ll ans = 0;
  for(auto &p : mp) {
    int s = p.second;
    ans += (ll)s * (s-1) / 2;
  }
  cout << ans << endl;
  return 0;
}