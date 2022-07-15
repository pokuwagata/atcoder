#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll N;
  cin >> N;
  int ans = 0;
  for(ll i=1; i<=N; i++) {
    long double a = (long double)(2*N -1 * i * (i-1))/(2*i);
    if(floorl(a) == a) {
      ans++;
      printf("%d %10.10Lf %10.10Lf\n", i, a, floorl(a));
    }
  }

  cout << ans << endl;
  return 0;
}