#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  int a[n] = {0};
  int b[n] = {0};

  rep(i, n) {
    cin >> a[i];
    if(i==0) {
      continue;
    }
    a[i] = max(a[i], a[i-1]);
  }

  rep(i, n) cin >> b[i];

  ll c[n] = {0};
  rep(i, n) {
    if(i==0) {
      c[i] = (ll)a[i] * b[i];
      continue;
    }
    c[i] = max(c[i-1], (ll)a[i]*b[i]);
  }

  rep(i,n) {
    cout << c[i] << endl;
  }

  return 0;
}