#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  ll n, k;
  cin >> n >> k;
  cout << min(abs(n%k - k), n%k);
  return 0;
}