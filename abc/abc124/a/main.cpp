#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = 0;
  if(a>b) {ans+=a; a--;}
  else ans+=b; b--;
  ans += max(a, b);
  cout << ans << endl;
  return 0;
}