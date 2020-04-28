#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  double x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  printf("%.8f\n", sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2)));
  return 0;
}