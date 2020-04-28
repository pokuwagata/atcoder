#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int c = 0;
  string s;
  cin >> s;
  
  for(ll i=4; i<=(ll)s.size(); i++) {
    for(ll j=0; j<=(ll)s.size(); j++) {
      if((ll)s.substr(j, i).size() ==i) {
        ll ss = stoll(s.substr(j, i));
        if(ss >=2019 && ss % 2019 == 0){
          c++;
        } 
      }
    }
  }
  cout << c << endl;
  return 0;
}