#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n = 5;
  rep(i,n) rep(j,i){
    printf("%d %d\n", i, j);
  }
  for(int i=0; i<n; i++) {
    for(int j=0; j<i; j++) {
      printf("%d %d\n", i, j);
    }
  }
  return 0;
}