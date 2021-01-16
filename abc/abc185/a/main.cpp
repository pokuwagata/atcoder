#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  int a1, a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;
  cout << min(a1, min(a2, min(a3, a4))) << endl;
  return 0;
}