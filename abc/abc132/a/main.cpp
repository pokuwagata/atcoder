#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  string s;
  cin >> s;
  map<char,int> mp;
  rep(i, s.size()) {
    mp[s[i]]++;
  }
  if(mp.size() != 2) {
    cout << "No" << endl;
    return 0;
  }
  for(auto &v : mp) {
    if(v.second != 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}