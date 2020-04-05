#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  long long n, k;
  long long ans;
  scanf("%lld %lld", &n, &k);
  // if (n >= k) {
  //   if (n%k == 0) {
  //     min = 0;
  //   } else {
    long long t = n % k;
    ans = min(t, k-t);
      // ans = - (n % k - k) >= n % k ? n % k : - (n % k -k); 
  //   }
  // } else {
  //     min = - (n - k) >= n ? n : - (n - k); 
  // }
  printf("%lld\n", ans);
  return 0;
}