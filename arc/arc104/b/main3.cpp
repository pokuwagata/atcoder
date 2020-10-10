#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  int N;
  string S;
  cin >> N >> S;
  int ans = 0;
  for (int i = 0; i < N; ++i)
  {
    int c1 = 0, c2 = 0;
    for (int j = i; j < N; ++j)
    {
      cout << S[j];
      if (S[j] == 'A')
        c1++;
      else if (S[j] == 'T')
        c1--;
      else if (S[j] == 'C')
        c2++;
      else
        c2--;
      cout << endl;
      if (c1 == 0 && c2 == 0) {
        cout << "OK" << endl;
        ans++;
      }
    }
  }
  cout << ans << endl;

  return 0;
}