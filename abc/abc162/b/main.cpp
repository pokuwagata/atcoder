#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int n;
  ll sum = 0;
  cin >> n;
  for(int i=1; i<= n; i++) {
    if(i % 3 != 0 && i % 5 != 0) sum+= i;
  }
  cout << sum << endl;
  return 0;
}