#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  while(1) {
    c -= b;
    if(c<=0) {
      cout << "Yes" <<endl;
      break;
    }
    a -= d;
    if(a<=0) {
      cout << "No" <<endl;
      break;
    }
  }

  return 0;
}