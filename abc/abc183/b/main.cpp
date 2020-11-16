#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  double a = (-1 * gy - sy ) / (gx - sx);
  double ans = gy / a + gx;
  printf("%.10f\n", ans);
  return 0;
}