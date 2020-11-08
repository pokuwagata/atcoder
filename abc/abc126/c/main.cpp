#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, k;
  cin >> n >> k;
  double ans = 0;
  rep(i, n) {
    ans += (double)1/n * (i+1 < k ? pow(0.5, ceil(log2((double)k/(i+1)))) : 1);
  }
  printf("%.12f", ans);
  return 0;
}