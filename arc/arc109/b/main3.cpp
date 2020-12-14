#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll n;
  cin >> n;
  ll ng = 2e9;
  ll ok = 1;
  while(abs(ok-ng)>1) {
    ll mid = (ok + ng)/2;
    if (mid * (mid+1)/2 <= n+1) ok = mid;
    else ng = mid;
  }
  cout << n + 1 - ok << endl;
  return 0;
}