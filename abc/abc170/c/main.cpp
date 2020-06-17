#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int x, n;
  cin >> x >> n;
  if(n == 0) {
    cout << x << endl;
    return 0;
  }
  vector<int> p(n);
  bool hasx = false;
  rep(i, n) {
    cin >> p[i];
    if(p[i] == x) hasx = true;
  }
  if(!hasx) {
    cout << x << endl;
    return 0;
  }

  int i = 1;
  while(true) {
    int l = x - i;
    int r = x + i;
    bool ok = true;
    rep(i, n) {
      if(p[i] == l) ok = false; 
    }
    if(ok) {
      cout << l << endl;
      return 0;
    }
    ok = true;
    rep(i, n) {
      if(p[i] == r) ok = false; 
    }
    if(ok) {
      cout << r << endl;
      return 0;
    }
    i++;
  }
  return 0;
}