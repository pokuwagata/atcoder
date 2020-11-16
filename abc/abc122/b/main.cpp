#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

bool match(char c) {
  return c == 'A' || c == 'G' || c == 'C' || c == 'T';
}

int main() {
  string s;
  cin >> s;
  int ans = 0;
  rep(i, s.size()) {
    if(!match(s[i])) continue;
    int cnt = 1;
    for(int j=i+1; j<s.size(); j++) {
      if(!match(s[j])) break;
      cnt++;
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}