#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> w(n);
  rep(i, n) cin >> w[i];
  int sum = 0;
  rep(i, n) sum += w[i];
  int ans = INF;
  int s1 = 0;
  rep(i, n) {
    s1 += w[i];
    int s2 = sum - s1;
    ans = min(ans, abs(s1-s2));
  }
  cout << ans << endl;
  return 0;
}