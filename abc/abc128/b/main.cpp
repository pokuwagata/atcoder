#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  map<pair<string,int>, int> mp;
  vector<pair<string,int>> v(n);
  rep(i, n) {
    pair<string, int> p;
    cin >> p.first >> p.second;
    mp[p] = i+1;
    v[i] = p;
  }
  sort(v.begin(), v.end());
  rep(i, n-1) {
    for (int j=i+1; j <n; j++) {
      if(v[i].first == v[j].first && v[j].second > v[i].second) {
        swap(v[i], v[j]);
      }
    }
  }
  rep(i, n) {
    cout << mp[v[i]] << endl;
  }
}