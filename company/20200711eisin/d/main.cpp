#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int popcount(int s, int n) {
  int c = 0;
  rep(i, n) {
    if(s>>i & 1) c++;
  }
  return c;
}

int main()
{
  int n;
  string x;
  cin >> n >> x;
  int xn;
  rep(i, n) {
    xn |= (1 << (n-1-i)) * (x[i] - '0');
  }
  for(int i=n; i>0; i--)
  {
    int s = xn ^ (1 << (i-1));
    int ans = 0;
    while(s) {
      s = s % popcount(s, n);
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}