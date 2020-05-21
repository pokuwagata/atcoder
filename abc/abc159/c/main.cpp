#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int l;
  cin >> l;
  if(l%3 == 0) {
    cout << pow(l/3, 3) << endl;
  } else if (l%3 == 1) {
    cout << pow((l-1)/3, 2) * (l+2)/3 << endl;
  } else if(l%3 == 2) {
    cout << pow((l+1)/3, 2) * (l-2)/3 << endl;
  }
  return 0;
}