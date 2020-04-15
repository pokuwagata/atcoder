#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main()
{
  string str;
  int q;
  cin >> str >> q;
  rep(i, q)
  {
    string co, str2;
    int a, b;
    cin >> co >> a >> b;
    if (co == "replace")
    {
      cin >> str2;
      str.replace(str.begin()+a, str.begin()+b+1, str2);
    }
    else if (co == "reverse")
    {
      reverse(str.begin()+a, str.begin()+b+1);
    }
    else if (co == "print")
    {
      cout << str.substr(a, b-a+1) << endl;
    }
  }
  return 0;
}