#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  // int n;
  // cin >> n;
  // int keta = 0;
  // while(n) {
  //   keta++;
  //   n /= 10;
  //   // n /= 10;
  //   // if(n) keta++;
  // }
  // cout << keta << endl;
  int dx = 12345;
    while(dx) {
      cout << dx % 10 << endl;
      dx /= 10;
    }


  return 0;
}
