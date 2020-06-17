#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;

  vector<double> a(n);
  vector<int> d(n);
  rep(i, n) {
    double v;
    cin >> v;
    if(v==0) {
      cout << 0 << endl;
      return 0;
    } 
    while(1) {
      if(v < 10) {
        a[i] = v; 
        break;
      }
      v /= (double)10;
      d[i]++;
    }
  }
  int dtotal = 0;
  double atotal = 1;
  rep(i, n) {
    dtotal += d[i];
    atotal *= a[i];
    cout << d[i] << endl;
    cout << a[i] << endl;
  }
  while(1) {
    cout << atotal << endl;
    if(atotal < 10) {
      break;
    }
    atotal /= 10;
    dtotal++;
  }
  if(dtotal > 18) {
    cout << -1 << endl;
    return 0;
  } else if (dtotal == 18) {
    if(atotal > 1) cout << -1 << endl;
  }
  ll ans = (ll)(atotal * pow(10, dtotal));
  cout << ans << endl;
  return 0;
}