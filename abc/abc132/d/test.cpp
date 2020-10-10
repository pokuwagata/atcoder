#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, k;
  cin >> n >> k;
  int ans = 1;
  for(int i=0; i<k; i++) {
    ans *= n-i;
  }
  ans /= k;
  cout << ans << endl;

  // int c[105][105] = {};
  // c[0][0] = 1;
  // for(int i=0; i<=100; i++) {
  //   for(int j=0; j<=i; j++) {
  //     c[i+1][j] += c[i][j];
  //     c[i+1][j+1] += c[i][j];
  //   }
  // }
  // cout << c[n][k] << endl;
  // for(int i=0; i<=n; i++) {
  //   for(int j=0; j<=i; j++) {
  //     printf("%d ", c[i][j]);
  //   }
  //   printf("\n");
  // }
  return 0;
}