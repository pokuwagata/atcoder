#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  if(n == 1) return 0;
  for(int i=2; i*i<=n; i++) {
    if(n % i == 0) {
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}