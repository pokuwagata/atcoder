#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int a, b, t;
  cin >> a >> b >> t;
  cout << ((int)(t+0.5) / a) * b << endl;
  return 0;
}