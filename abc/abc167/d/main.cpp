#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

// vector<int> d[60]; // segmentation fault
int d[60][212345]; 

int main() {
  int n; ll k;
  cin >> n >> k;
  rep(i, n) {
    int a;
    cin >> a;
    a--;
    d[0][i] = a;
  }

  rep(i, 60) {
    if (i==0) continue;
    rep(j, n) {
      d[i][j] = d[i-1][d[i-1][j]];
      // d[i+1][j] = d[i][d[i][j]];
    }
  }

  int v =0;
  for(int i=60; i>=0; i--) {
    ll l = 1ll << i;
    if(l<=k) {
      v = d[i][v];
      k-=l;
    }
  }
  cout << v+1 << endl;

  return 0;
}