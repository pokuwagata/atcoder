#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll n;
  cin >> n;
  vector<char> p(26);
  rep(i, 26) p[i] = 'a'+i;
  string ans;
  for(int i=0; n>0; i++) {
    n--;
    ans += p[n%26];
    n /= 26;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}