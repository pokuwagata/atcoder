#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int n, m;
  ll sum=0;
  cin >> n >> m;
  rep(i, m) {
    int a;
    cin >> a;
    sum += a;
  }
  if(n < sum) cout << -1 << endl;
  if(n >= sum) cout << n-sum << endl;
  return 0;
}