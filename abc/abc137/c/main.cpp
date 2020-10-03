#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<string> s;
  rep(i, n) {
    string t;
    cin >> t;
    sort(t.begin(), t.end());
    s.push_back(t);
  }
  sort(s.begin(), s.end());
  s.push_back("Z");
  ll ans = 0;
  int count = 0;
  rep(i, n) {
    if(s[i] == s[i+1]) count++;
    else {
      ans += (count + 1)*count/2; 
      count = 0;
    }
  }
  cout << ans << endl;
  return 0;
}