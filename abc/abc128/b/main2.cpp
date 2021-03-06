#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<pair<pair<string,int>,int>> v(n);
  rep(i, n) {
    cin >> v[i].first.first;
    int x;
    cin >> x;
    v[i].first.second = -1 * x;
    v[i].second = i + 1;
  }
  sort(v.begin(), v.end());
  rep(i, n) cout << v[i].second << endl;

  return 0;
}