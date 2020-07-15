#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  if(n%1000 > 0) {
    cout << 1000 - n % 1000 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}