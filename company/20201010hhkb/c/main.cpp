#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  set<int> s;
  int ans = 0;
  rep(i, n) {
    s.insert(p[i]);
    for(int j=ans; j<INF; j++) {
      if(!s.count(j)) {
        cout << j << endl;
        ans = j;
        break;
      }
    }
  }
  return 0;
}