#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll x, y;
  cin >> x >> y;
  int a, b;
  cin >> a >> b;

  ll s = x;
  ll e = 0;
  while(s<=y) {
    if(s * a > s + b) {
      ll cnt = (s * a - s) / b;
      e += cnt;
      s += cnt * b;
    } else {
      s *= a;
      e++;
    }
  }
  cout << e << endl;
  return 0;
}