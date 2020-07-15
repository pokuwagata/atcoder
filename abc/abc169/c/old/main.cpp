#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll a;
  double b;
  cin >> a >> b;
  ll ib = (b * 100+0.5);
  // ll ib = (b * 100);
  cout << ib << endl;
  a *= ib;
  a /= 100;
  // ll temp = a * (b * 100+0.5);
  // ll ans = temp / 100;
  cout << a << endl;
  return 0;
}