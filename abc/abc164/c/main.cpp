#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int n;
  set<string> ss;
  cin >> n;
  rep(i, n) {
    string s;
    cin >> s;
    ss.insert(s);
  }
  cout << ss.size() << endl;
  return 0;
}