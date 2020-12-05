#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll n;
  cin >> n;

  // clock_t start = clock();

  ll sum = 0;
  ll ans = 1;
  while(1) {
    sum += ans;
    if(sum+ans+1 > n+1) {
      break;
    }
    ans++;
    // cout << ans << endl;
  }

  cout << n + 1 - ans << endl;

  // clock_t end = clock();
  //   const double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
  //   printf("time %lf[ms]\n", time);
  return 0;
}