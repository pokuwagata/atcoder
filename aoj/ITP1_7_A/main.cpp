#include <stdio.h>
using namespace std;

int main()
{
  int m, f, t, r;
  char g;
  while(1)
  {
    scanf("%d %d %d", &m, &f, &r);
    if (m == -1 && f == -1)
      break;
    t = m + f;
    if (m == -1 || f == -1)
    {
      g = 'F';
    }
    else if (t >= 80)
    {
      g = 'A';
    }
    else if (t >= 65)
    {
      g = 'B';
    }
    else if (t >= 50)
    {
      g = 'C';
    }
    else if (t >= 30) {
      g = (r>=50) ? 'C' : 'D';
    } else {
      g = 'F';
    }
    printf("%c\n", g);
  }

  return 0;
}