#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  map<int, int> m;
  rep(i, n) {
    int a;
    cin >> a;
    m[a]++;
  }
  for(auto p : m) {
    if(p.second > 1) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES"<< endl;
  return 0;
}