#include <stdio.h>
using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n - 1; i++)
  {
    printf("%d ", a[n-i-1]);
  }
  printf("%d\n", a[0]);
  return 0;
}