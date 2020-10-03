#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  int n, d;
  cin >> n >> d;
  cout << (n + (2 * d + 1) - 1) / (2 * d + 1) << endl;
  return 0;
}