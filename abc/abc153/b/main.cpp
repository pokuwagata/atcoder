#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int h, n;
  cin >> h >> n;
  int sum =0;
  rep(i, n) {
    int a;
    cin >> a;
    sum += a;
  }
  if(h<=sum) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}