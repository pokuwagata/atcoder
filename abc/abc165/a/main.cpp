#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int k, a, b;
  cin >> k >> a >> b;
  for (int i = a; i <= b; i++)
  {
    if(i % k == 0) {
      cout << "OK" << endl;
      return 0;
    }
  }
  cout << "NG" << endl;
  
  return 0;
}