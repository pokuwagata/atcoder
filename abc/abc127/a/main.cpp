#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int a, b;
  cin >> a >> b;
  if(a >= 13) {
    cout << b << endl;
  } else if(a >=6 && a <= 12) {
    cout << b/2 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}