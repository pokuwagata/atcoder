#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main()
{
  string w;
  int count = 0;
  cin >> w;
  // transform(w.begin(), w.end(), w.begin(), ::tolower);
  lower(w);
  while (1)
  {
    string t;
    cin >> t;
    if (t == "END_OF_TEXT")
      break;
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    if (t == w)
      count++;
  }
  cout << count << endl;
  return 0;
}