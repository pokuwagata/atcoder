#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n ;
  int x = n % 10;
  if(x == 3) cout << "bon" << endl;
  else if(x == 0 || x == 1 || x == 6 || x == 8) cout << "pon" << endl;
  else cout << "hon" <<endl;
  return 0;
}