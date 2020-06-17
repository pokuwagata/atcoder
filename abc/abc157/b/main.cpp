#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

vector<P> a[3];

bool isBingo() {
  rep(i, 3) {
    int c = 0;
    rep(j, 3) {
      if(a[i][j].second) c++;
    }
    if(c==3) return true;
  }

  rep(i, 3) {
    int c = 0;
    rep(j, 3) {
      if(a[j][i].second) c++;
    }
    if(c==3) return true;
  }

  int c = 0;
  rep(i, 3) {
    if(a[i][i].second) c++;
  }
  if(c==3) return true;

  c = 0;
  rep(i, 3) {
    if(a[i][2-i].second) c++;
  }
  if(c==3) return true;
  return false;
}

bool hasNum(int b) {
  rep(i, 3) {
    rep(j, 3) {
      if(a[i][j].first == b) {
        a[i][j].second = 1;
        return true;
      }
    }
  }
  return false;
}

int main() {
  rep(i, 3) {
    rep(j, 3) {
      int v;
      cin >> v;
      a[i].push_back(P(v, 0));
    }
  }

  int ans = 0;
  int n;
  cin >> n;
  rep(i, n) {
    int b;
    cin >> b;
    hasNum(b);
  }
  if(isBingo()) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}