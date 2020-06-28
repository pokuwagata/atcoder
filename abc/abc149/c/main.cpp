#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int x;
  cin >> x;
  while(1) {
    bool ok = true;
    rep(i, sqrt(x)) {
      if(i<=1) continue;
      if(x % i == 0) ok = false;
    }
    if(ok) {
      cout << x << endl;
      break;
    }
    x++;
  }
  return 0;
}