#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int last(string t) {
  if (t.substr(t.size()-3,3) == "110") {
    return 3;
  } else if (t.substr(t.size()-2,2) == "11") {
    return 2;
  } else if (t.substr(t.size()-1,1) == "1"){
    return 1;
  } else {
    return 0;
  }
}

bool check(string s, int last) {
  for(int i=0; i<s.size()-last; i+=3) {
    if(s.substr(i, 3) != "110") return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  string t;
  cin >> t;
  ll y = last(t);
  if(y == 0) {
    cout << 0 << endl;
    return 0;
  }

  ll x;
  if (t.substr(0,3) == "110" && check(t.substr(3), y)) {
    x = 3;
  } else if (t.substr(0,2) == "10" && check(t.substr(2), y)) {
    x = 2;
  } else if (t.substr(0,1) == "0" && check(t.substr(1), y)) {
    x = 1;
  } else {
    cout << 0 << endl;
    return 0;
  }
  // cout << x << " " << y << endl;

  ll block = (n - (x + y))/3 + 2;
  // cout << block << endl;

  ll block2 = (ll)pow(10, 10) / block;
  // cout << block2 << endl;
  ll ans = block2 + (block2 - 1)*(block - 1);

  cout << ans << endl;
  return 0;

}
