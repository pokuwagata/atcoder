#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int p, q, r;
  cin >> p >> q >> r;
  cout << min(p+q, min(q+r,r+p)) << endl;
  return 0;
}