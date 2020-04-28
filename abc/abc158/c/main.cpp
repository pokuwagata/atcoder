#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;
  for(int i=1; i<=1200;i++) {
    if(a == floor(0.08 * i) && b == floor(0.1 * i)) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}