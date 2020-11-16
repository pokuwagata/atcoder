#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  string n;
  cin >> n;
  int k = n.size();
  vector<pair<int, bool>> d(k);
  rep(i, k) d[i].first = n[i] - '0';

  rep(i, k) {
    if(d[i].first % 3 == 0) d[i].second = true;
  }

  for(int i=0; i<k; i++) {
    if(d[i].second) continue;
    for(int j=i+1; j<k; j++) {
      if(d[j].second) continue;
      if((d[i].first + d[j].first)%3 == 0) {
        d[i].second = true;
        d[j].second = true;
        break;
      }
    }
  }

  int ans = 0;
  rep(i, k) {
    if(!d[i].second) ans++;
  }
  if(ans == k) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }

  return 0;
}