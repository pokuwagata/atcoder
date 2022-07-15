#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if(c==0) {
    while(1) {
      a--;
      if(a < 0) {
        cout << "Aoki" << endl;
        return 0;
      }
      b--;
      if(b < 0) {
        cout << "Takahashi" << endl;
        return 0;
      }
    }
  } else {
    while(1) {
      b--;
      if(b < 0) {
        cout << "Takahashi" << endl;
        return 0;
      }
      a--;
      if(a < 0) {
        cout << "Aoki" << endl;
        return 0;
      }
    }
  }
  return 0;
}