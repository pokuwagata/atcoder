#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  char b;
  cin >> b;
  if(b=='A') cout << 'T' << endl;
  if(b=='T') cout << 'A' << endl;
  if(b=='C') cout << 'G' << endl;
  if(b=='G') cout << 'C' << endl;
  return 0;
}