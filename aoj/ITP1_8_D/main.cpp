#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  string s, p;
  bool ok = false;
  cin >> s >> p;
  s +=s;

  rep(i, s.size()) if(s.substr(i, p.size()) == p) ok = true;

  if(ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  cout << (ok ? "a" : "b") << endl;

  return 0;
}