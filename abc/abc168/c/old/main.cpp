#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

const double pi = 3.141592653589793;

int main() {
  double a, b, h, m;
  cin >> a >> b >> h >> m;
  double a_r = h / 6.0;
  double b_r = m / 30.0;
  // double cosx = cos((a_r - b_r)*pi);
  double cosx = cos((5*h - m)*pi/30);
  if(a_r < b_r) cosx = -1.0 * cosx;

  double c2 = pow(a,2) + pow(b,2) -2.0 * a * b * cosx;
  cout << sqrt(c2) << endl;
  return 0;
}