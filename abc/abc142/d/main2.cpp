#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int gcd(int a, int b) {return b ? gcd(b, a%b) : a;}

vector<pair<ll,int>> factorize(ll n) {
  vector<pair<ll,int>> v;
  for(int i=2; i*i<=n; i++) {
    if(n%i) continue;
    v.emplace_back(i, 0);
    while(n%i == 0) {
      n /= i;
      v.back().second++;
    }
  }
  if(n != 1) v.emplace_back(n, 1);
  return v;
}



int main() {
  int a, b;
  cin >> a >> b;
  auto f = factorize(a);
  rep(i, f.size()) {
    cout << f[i].first << " " << f[i].second << endl;
  }
  return 0;
}