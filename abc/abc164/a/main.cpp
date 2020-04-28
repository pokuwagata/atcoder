#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int s, w;
  cin >> s >> w;
  cout << ((s <= w) ? "unsafe" : "safe") << endl;
  return 0;
}