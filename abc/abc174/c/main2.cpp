#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int k;
  cin >> k;
  int i = 1;
  set<int> s;
  int x = 7 % k;
  while(s.count(x) == 0) {
    s.insert(x);
    if(s.count(0) != 0) {
      cout << i << endl;
      return 0;
    }
    x = (10*x +7) %k;
    i++;
  }
  cout << -1 << endl;
  return 0;
}