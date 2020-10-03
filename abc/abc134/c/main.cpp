#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> b(n);
  b = a;
  sort(b.begin(), b.end());
  int max = b[b.size()-1];
  int second = b[b.size()-2];
  rep(i, n)
  {
    if(a[i] == max) cout << second << endl;
    else cout << max << endl;
  }
  return 0;
}