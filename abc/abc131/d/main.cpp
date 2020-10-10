#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> p(n);
  rep(i, n) {
    cin >> p[i].second >> p[i].first;
  }
  sort(p.begin(), p.end());
  ll sum = 0;
  rep(i, n) {
    sum += p[i].second;
    if(p[i].first < sum) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}