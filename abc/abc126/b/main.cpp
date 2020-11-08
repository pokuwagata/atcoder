#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  string s;
  cin >> s;
  int first = 10 * (s[0] - '0') + s[1] - '0';
  int second = 10 * (s[2] - '0') + s[3] - '0';

  if (first >= 1 && first <= 12) {
    if (second >= 1 && second <= 12) {
      cout << "AMBIGUOUS" << endl;
    } else {
      cout << "MMYY" << endl;
    }
  } else {
    if (second >= 1 && second <= 12) {
      cout << "YYMM" << endl;
    } else {
      cout << "NA" << endl;
    }
  }
  return 0;
}