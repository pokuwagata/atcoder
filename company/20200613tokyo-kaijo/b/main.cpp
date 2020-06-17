#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll a, v, b, w, t;
  cin >> a >> v >> b >> w >> t;
  if(a<b) {
    if(abs(b+w*t) <= abs(a+v*t)) cout << "YES" << endl;
    else cout << "NO" << endl;
  } else {
    if(abs(b-w*t) <= abs(a-v*t)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}