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
  vector<int> c = a;

  rep(j, n-1) {
    vector<int> b = a;
    rep(i, a.size()-1) {
      if(a[2*i] > a[2*i+1]) {
        b.erase(b.begin()+(2*i+1));
        cout << b[2*i+1] << endl;
      }
      else {
        b.erase(b.begin()+(2*i));
        cout << b[2*i] << endl;
      }
    }
    a = b;
  }
  rep(i, n) cout << a[i] << endl;

  // int v = min(a[0], a[1]);
  // rep(i, n) {
  //   if(c[i] == v) cout << i+1 << endl;
  // }

  return 0;
}