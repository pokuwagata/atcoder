#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  rep(i, n) {
    cin >> v[i].first >> v[i].second;
  }
  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      for(int k=j+1; k<n; k++) {
        if ( (v[k].second - v[j].second) * (v[j].first - v[i].first) 
          == (v[j].second - v[i].second) * (v[k].first - v[j].first) ) {
            cout << "Yes" << endl;
            return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}