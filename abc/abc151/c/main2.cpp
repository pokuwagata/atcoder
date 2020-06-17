#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> x(n, INF);
  int ac, wa;
  ac = wa = 0;
  rep(i, m) {
    int p;
    string s;
    cin >> p >> s;
    p--;
    if(i <= x[p]) {
      if(s == "AC") {
        ac++;
        x[p] = i;
      }
      else wa++;
    }
  }
  cout << ac << " " << wa << endl;

  return 0;
}