#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main()
{
  while (1)
  {
    int n;
    cin >> n;
    if (n == 0)
      break;

    double sum = 0;
    vector<int> ss;

    rep(i, n)
    {
      int s;
      cin >> s;
      sum += s;
      ss.push_back(s);
    }

    double m = sum / n;
    double sigma = 0;
    rep(i, n)
    {
      sigma += pow(ss[i] - m, 2);
    }

    printf("%.8f\n", sqrt(sigma / n));
  }

  return 0;
}