#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  string s;
  cin >> s;
  if (s[s.size() - 1] == 's')
  {
    cout << s + "es" << endl;
  }
  else
  {
    cout << s + 's' << endl;
  }
  return 0;
}