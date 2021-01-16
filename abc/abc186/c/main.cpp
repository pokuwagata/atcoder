#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  set<int> m;
  for(int i=1; i<=n; i++) {
    string a = to_string(i);
    for(char c : a) {
      if(c == '7') {
        m.insert(i);
      }
    }
    stringstream ss;
    ss << oct << i;
    string b = ss.str();
    for(char c : b) {
      if(c == '7') {
        m.insert(i);
      }
    }
  }

  cout << n - m.size() << endl;
  return 0;
}