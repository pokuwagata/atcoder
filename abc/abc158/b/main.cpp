#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  ll n, a, b, c, bc;
  cin >> n >> a >> b;
  c = n % (a+b);
  bc = n * a / 1;
  // bc = a * (n/(a+b));
  if(c >= a) {
    bc+=a;
  } else {
    bc+=c;
  }
  cout <<  bc << endl ;
  return 0;
}