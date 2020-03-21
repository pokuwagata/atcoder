#include <stdio.h>
using namespace std;

int main()
{
  int W, H, x, y, r;
  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
  if (r <= x && x + r <= W && r <= y && y + r <= H)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }
  return 0;
}