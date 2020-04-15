#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main()
{
  int c = 0;
  int n;
  string s;
  cin >> n >> s;
  for (int i = 1; i <= n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      if(s[i - 1] == s[j - 1]) continue;
      for (int k = j + 1; k <= n; k++)
      {
        if (s[i - 1] != s[k - 1] && s[j - 1] != s[k - 1] && j - i != k - j)
        {
          c++;
        }
      }
    }
  }
  cout << c << endl;
  return 0;
}