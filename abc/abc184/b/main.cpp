#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, x;
  cin >> n >> x;
  string s;
  cin >> s;
  rep(i, s.size()) {
    if (s[i] == 'o') {
      x++;
    } else {
      x = max(0, x-1);
    }
  }
  cout << x << endl;
  return 0;
}