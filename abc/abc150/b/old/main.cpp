#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  string s;
  cin >> n >> s;
  if(s.find("ABC") == string::npos) {
    cout << 0 << endl;
    return 0;
  }

  int ans = 0;
  while (1)
  {
    int start = s.find("ABC");
    int end = s.size();
    if(start == string::npos) break;
    s = s.substr(start+3, end);
    cout << s << endl;
    ans++;
  }
  cout << ans << endl;
  
  return 0;
}