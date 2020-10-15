#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  vector<int> p(4);
  rep(i, 4) cin >> p[i];
  int sum2 = 0;
  rep(i, 4) sum2+=p[i];
  for(int i=1; i< 1 << 3; i++) {
    int sum = 0;
    for(int j=0; j<4; j++) {
      if(i & 1 << j) {
        sum += p[j];
      }
    }
    if(sum * 2 == sum2) {
      puts("Yes");
      return 0;
    }
  }
  puts("No");
  return 0;
}