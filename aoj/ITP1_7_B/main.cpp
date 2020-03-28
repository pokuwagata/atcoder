#include <stdio.h>
using namespace std;

int main()
{
  int n, x, c;
  while (1)
  {
    c = 0;
    scanf("%d %d", &n, &x);
    if (n == 0 && x == 0)
      break;
    for (int i = 1; i <= n; i++)
    {
      for (int j = i + 1; j <= n; j++)
      {
        for (int k = j + 1; k <= n; k++)
        {
          if (i + j + k == x)
            c++;
        }
      }
    }
    printf("%d\n", c);
  }

  return 0;
}