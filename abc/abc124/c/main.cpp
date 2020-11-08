#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  string s;
  cin >> s;
  string t;
  rep(i, s.size()) {
    if(i%2) t+='0';
    else t+='1';
  }
  string u;
  rep(i, s.size()) {
    if(i%2 == 0) u+='0';
    else u+='1';
  }
  int cnt1 = 0;
  rep(i, s.size()) {
    if(s[i] != t[i]) cnt1++;
  }
  int cnt2 = 0;
  rep(i, s.size()) {
    if(s[i] != u[i]) cnt2++;
  }
  int ans = min(cnt1, cnt2);
  cout << ans << endl;
  return 0;
}