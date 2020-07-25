#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> y(n+1);
  for(int i=1; i<=n; i++) {
    if(n == 1) {
      y[i]++;
      break;
    }
    map<int, int> s;
    int tmp = i;
    for(int j=2; j*j<=i; j++) {
      while (tmp % j == 0) {
        s[j]++;
        tmp /= j;
      }
    }
    if(tmp>1) s[tmp]++;
    int sum = 1;
    for(auto v : s) {
      sum *= v.second+1;
    }
    y[i]=sum;
  }
  ll ans = 0;
  for(int i=1; i<=n; i++) {
    ans += i * y[i];
  }
  cout << ans << endl;
  return 0;
}