#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
  while (1)
  {
    int x[2];
    scanf("%d %d", &x[0], &x[1]);
    if (x[0] == 0 && x[1] == 0)
      break;
    if (x[1] < x[0])
      swap(x[0], x[1]);

    printf("%d %d\n", x[0], x[1]);
  }

  return 0;
}