#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int ans[n] = {0};
  rep(i, n-1) {
    int n;
    cin >> n;
    ans[n-1] += 1;
  }
  rep(i, n) {
    cout << ans[i] << endl;
  }
  return 0;
}