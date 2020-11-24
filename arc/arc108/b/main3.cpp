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
  string d;
  rep(i, s.size()) {
    d+=s[i];
    if (d.size() >=3 && d.substr(d.size()-3) == "fox") {
      d.erase(d.begin() + d.size()-3, d.end());
    }
  }
  cout << d.size() << endl;
  return 0;
}