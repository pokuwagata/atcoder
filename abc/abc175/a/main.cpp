#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  string s;
  cin >> s;
  if(s == "SSS") cout << 0 << endl;
  else if(s == "RRR") cout << 3 << endl;
  else if(s == "RRS" || s == "SRR") cout << 2 << endl;
  else cout << 1 << endl;
  return 0;
}