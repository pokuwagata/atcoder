#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int r;
  double s;
  cin >> r;
  s = 2 * M_PI * r; 
  printf("%.3f\n", s);
  return 0;
}