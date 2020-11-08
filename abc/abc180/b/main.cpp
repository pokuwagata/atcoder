#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  ll mh = 0;
  rep(i, n) mh+= abs(x[i]);
  ll sum = 0;
  rep(i, n) sum+= (ll)x[i] * x[i];
  double ud = sqrt(sum);
  ll ch = 0;
  rep(i, n) ch = max(ch, (ll)abs(x[i]));

  cout << mh << endl;
  printf("%.10f\n",ud);
  cout << ch << endl;
  return 0;
}