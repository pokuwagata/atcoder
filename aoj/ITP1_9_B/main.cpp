#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  string s;
  while(cin >> s, s != "-") {
    int m, h;
    cin >> m;
    rep(i, m) {
      cin >> h;
      s = s.substr(h) + s.substr(0, h);
    }
    cout << s << endl;
  }
  return 0;
}