#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for(int i=1; i<n; i++) {
    int ab = n - i;
    for(int j=1; j*j<=ab; j++) {
      if(ab % j != 0) continue;
      ans++;
      if(ab / j != j) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}