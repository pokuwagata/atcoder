#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> h(n);
  rep(i, n) {
    int he;
    cin >> he;
    h[i] = he;
  }

  vector<set<int>> ms(n);

  rep(i, m) {
    int a, b;
    cin >> a >> b;
    ms[a-1].insert(h[b-1]);
    ms[b-1].insert(h[a-1]);
  }

int ans = 0;
  rep(i, n) {
    if (ms[i].size() == 0) {
      ans++;
      continue;
    }
    bool find = false;
    for(int he : ms[i]) {
      int tmp = h[i];
      if(h[i] <= he) {
        find = true;
        break;
      }
    }
    if(!find) ans++;
  }

  cout << ans << endl;
  return 0;
}