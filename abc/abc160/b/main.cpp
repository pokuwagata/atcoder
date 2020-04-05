#include <stdio.h>
using namespace std;

int main()
{
  int x, a, b, s;
  scanf("%d", &x);
  a = x / 500;
  b = x % 500 / 5;
  s = a * 1000 + b * 5;
  printf("%d\n", s);
  return 0;
}