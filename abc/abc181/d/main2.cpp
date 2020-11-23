#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int x;
  cin >> x;
  while(x) {
    int d = x % 10;
    x /= 10;
    cout << d << endl;
  }
  return 0;
}