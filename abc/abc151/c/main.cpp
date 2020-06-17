#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> ac(n), wa(n);
  rep(i, m) {
    string s;
    int p;
    cin >> p >> s;
    p--;
    if(ac[p]) continue;
    if(s == "AC") {
      ac[p] = 1;
    }else {
      wa[p]++;
    }
  }
  int a, b;
  a = b =0;
  rep(i, n) {
    a += ac[i];
    if(ac[i]) b+= wa[i];
  }
  cout << a << " " << b << endl;
  return 0;
}