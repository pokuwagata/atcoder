#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  ll x;
  cin >> x;
  ll xx = 100;
  for(ll i=1; ;i++) {
    xx += xx / 100;
    if(xx >= x) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}