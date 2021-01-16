#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> a(pow(2,n));
  rep(i, pow(2,n)) cin >> a[i];
  vector<int> c = a;
  rep(j, n-1) {
    vector<int> b;
    rep(i, a.size()/2) {
      if(a[2*i] > a[2*i+1]) b.push_back(a[2*i]);
      else b.push_back(a[2*i+1]);
    }
    a = b;
  }

  int v = min(a[0], a[1]);
  rep(i, pow(2,n)) {
    if(c[i] == v) cout << i+1 << endl;
  }

  return 0;
}