#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  int cnt = 0;
  rep(i, n) {
    string s;
    cin >> s;
    if(s == "AND") cnt++;
  }

  ll ans = powl(2, n+1);
  ll d;
  if(cnt == 0) d = 1;
  else {
    d = 3;
    cnt--;
    if(cnt > 0) d = d * pow(2, cnt);
  }
  cout << ans - d << endl;
  return 0;
}