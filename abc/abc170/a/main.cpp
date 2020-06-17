#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int x;
  rep(i, 5) {
    cin >> x;
    if(x == 0) cout << i+1 << endl;
  }
  return 0;
}