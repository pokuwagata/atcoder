#include <stdio.h>
using namespace std;

int main()
{
  int a, b, c, x;
  scanf("%d %d %d", &a, &b, &c);
  for (int i = a; i <= b; i++)
  {
    if (c % i == 0)
      x++;
  }
  printf("%d\n", x);
  return 0;
}