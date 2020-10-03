#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  int m = INF;
  rep(i, n-1) {
    if(h[i] <= h[i+1]) {
      m = h[i];
      continue;
    }
    else if(h[i] - 1 >=0 && h[i] - 1 <= h[i+1] && m <= h[i] - 1) {
      m = h[i] - 1;
      continue;
    }
    else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}