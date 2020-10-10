#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  string s;
  cin >> s;
  if(s[0] == s[1] || s[1] == s[2] || s[2] == s[3]) {
    puts("Bad");
  } else {
    puts("Good");
  }
  return 0;
}