#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> b = a;
  sort(a.begin(), a.end());
  int c = a[1];
  rep(i, n) {
    if(b[i] == c) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}