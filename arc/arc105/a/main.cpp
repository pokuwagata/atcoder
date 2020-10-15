#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int sum2 = a + b + c +d;
  rep(i, 2) rep(j, 2) rep(k, 2) rep(l, 2) {
    int sum = 0;
    if(i+j+k+l == 0) continue;
    if(i==1) sum+=a;
    if(j==1) sum+=b;
    if(k==1) sum+=c;
    if(l==1) sum+=d;
    if(sum == sum2 - sum) {
      puts("Yes");
      return 0;
    }
  }
  puts("No");
  return 0;
}