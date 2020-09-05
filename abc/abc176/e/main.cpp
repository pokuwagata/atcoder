#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int h, w, m;
  cin >> h >> w >> m;
  vector<vector<int>>mas(h);
  rep(i, h) {
    vector<int> ww(w);
    mas[i] = ww; 
  }
  rep(i, m) {
    int hh, ww;
    cin >> hh >> ww;
    mas[--hh][--ww] = 1;
  }
  int maxh = -1;
  int bw = 0;
  rep(i, w) {
    int sum = 0;
    rep(j, h) {
      if(mas[j][i] == 1) sum++;
    }
    if(sum > maxh) {
      maxh = sum;
      bw = i;
    }
  }

  int maxw = -1;
  int bh = 0;
  rep(i, h) {
    int sum = 0;
    rep(j, w) {
      if(mas[i][j] == 1) sum++;
    }
    if(sum > maxw) {
      maxw = sum;
      bh = i;
    }
  }

  int ans = maxh + maxw;

  if(mas[bh][bw] == 1) ans--;

  cout << ans << endl;
  return 0;
}