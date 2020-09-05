#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, k, m;
  cin >> n >> k >> m;
  vector<int> a(n-1);
  rep(i, n-1) cin >> a[i];
  int sum = 0;
  rep(i, n-1) sum += a[i]; 
  int x = m*n - sum;
  if(x > k) cout << -1 << endl;
  else if(x < 0) cout << 0 << endl;
  else cout << x << endl;
  return 0;
}