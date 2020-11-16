#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  ll n, w;
  cin >> n >> w;
  ll table[200005] = {0};
  rep(i, n) {
    ll s, e, p;
    cin >> s >> e >> p;
    table[s]+=p;
    table[e]-=p;
  }
  rep(i, 200005) {
    table[i+1] += table[i];
  }
  rep(i, 200005) {
    if(table[i] > w) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}