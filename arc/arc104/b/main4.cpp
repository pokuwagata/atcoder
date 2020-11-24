#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int ans = 0;
  rep(i, s.size()) {
    map<char, int> mp;
    for(int j=i; j<s.size(); j++) {
      mp[s[j]]++;
      if(mp['A'] == mp['T'] && mp['G'] == mp['C']) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}