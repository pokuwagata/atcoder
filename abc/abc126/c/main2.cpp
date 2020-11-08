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
    double temp = 1.0/n;
    int now = i + 1;
    while(now < k) {
      now *= 2;
      temp /= 2;
    }
    ans += temp;
  }
  printf("%.10f", ans);
  printf("%.11f", ans);
  printf("%.12f", ans);
  return 0;
}