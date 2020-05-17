#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  string s, t;
  cin >> s >> t;
  if(s+t[t.size()-1] == t && 'a' <= t[t.size()-1] && t[t.size()-1] <= 'z') {
    cout << "Yes"<< endl;
  } else {
    cout << "No"<< endl;
  }

  return 0;
}