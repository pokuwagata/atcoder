#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  string s;
  cin >> s;
  map<char, int> mp;
  rep(i, s.size()) mp[s[i]]++;
  for(int i=1; i<1000; i++) {
    if(i % 8 != 0) continue;
    map<char, int> mp2;
    string f;
    int d = to_string(i).size();
    if (d < s.size()) {
      rep(i, 3-d) f+= "0";
    }
    f+= to_string(i);
    for(char j : f) {
      mp2[j]++;
    }
    bool ok = true;
    for(auto p : mp2) {
      if(mp[p.first] < p.second) {
        ok = false;
        break;
      }
    }
    if(ok) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  
  return 0;
}