#include <stdio.h>
using namespace std;

int main() {
  int n, m, sum=0, count=0;
  scanf("%d %d", &n, &m);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    int v;
    scanf("%d", &v);
    sum+=v;
    a[i] = v;
  }
  for (int i = 0; i < n; i++) {
    double c = (double)sum / (4 * m);
    if(a[i] < c) {
      count++;
    }
  }
  if(m <= n - count) {
    printf("Yes");
  } else {
    printf("No");
  }

  return 0;
}