#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int s = 0;
  rep(i, n) s^=a[i];
  rep(i, n) a[i]^=s;
  rep(i, n) cout << a[i] << endl;
  return 0;
}