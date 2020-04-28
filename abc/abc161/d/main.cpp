#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int k;
  cin >> k;
  // vector<int> ans(k);
  int c = 0;
  for(ll i=1; ; i++)
  {
    string sl = to_string(i);
    bool ru = true;
    for(int j=0; j < sl.length() -1; j++) {
      if(abs(sl[j+1] - sl[j]) > 1) {
        ru = false;
        break;
      }
    }
    
    if(ru) {
      // ans[c] = r;
      c++;
      if(c == k) {
        cout << i << endl;
        break;
      }
    }
  }
  
  return 0;
}