#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  map<string, int> m;
  int maxc = -1;
  rep(i, n) {
    string s;
    cin >> s;
    m[s]++;
    maxc = max(m[s], maxc);
  }
  for(const auto& p : m ){
    if(p.second == maxc) cout << p.first << endl;
  }

  return 0;
}