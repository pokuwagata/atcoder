#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<int> x, y;
  rep(i, n)
  {
    int v;
    cin >> v;
    x.push_back(v);
  }
  rep(i, n)
  {
    int v;
    cin >> v;
    y.push_back(v);
  }
  double p1 = 0;
  rep(i, n)
  {
    p1 += abs(x[i] - y[i]);
  }
  printf("%.6f\n", p1);

  double p2 = 0;
  rep(i, n) {
    p2 += pow(abs(x[i] - y[i]),2);
  }
  printf("%.6f\n", sqrt(p2));

  double p3 = 0;
  rep(i, n) {
    p3 += pow(abs(x[i] - y[i]),3);
  }
  printf("%.6f\n", cbrt(p3));

  double p_inf = 0;
  rep(i, n) {
    p_inf = max(p_inf, (double)abs(x[i]-y[i]));
  }
  printf("%.6f\n", p_inf);

  return 0;
}