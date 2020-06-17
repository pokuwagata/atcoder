#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> s(m, -1);
  rep(i, m) {
    int sv, cv;
    cin >> sv >> cv;
    sv--;
    if(s[sv] != -1 && s[sv] != cv) {
      cout << -1 << endl;
      return 0;
    }
    s[sv] = cv;
  } 
  rep(i, pow(10, n)) {
    string v = to_string(i);
    bool ok = true;
    rep(j, m) {
      if(s[j] != -1 && v[j] != (char)(s[j])) {
        cout << v[j] << " " << s[j] << endl;
        ok = false;
        continue;
      }
      if(ok) {
        cout << i << endl;
        return 0;
      }
    }
  }
  return 0;
}