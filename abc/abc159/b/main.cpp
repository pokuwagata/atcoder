#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

bool isKaibun(string s) {
  int n = s.length();
  int l = n / 2;
  for(int i=0; i<l; i++) {
    if(s[i]!=s[n-1-i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  int n = s.length();
  bool ok = isKaibun(s) && isKaibun(s.substr(0, (n-1)/2)) && isKaibun(s.substr((n+3)/2 - 1, n));
  if(ok) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}