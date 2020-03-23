#include <stdio.h>
using namespace std;

bool check(char **m, int x, int y) {
  if(x+1 )
  if(m[x+1][y+1] == '.') check(x+1)
  return true;
}

int main() {
  int h, w;
  scanf("%d %d", &h, &w);
  char m[h][w];
  for (int i = 0; i < h; i++)
  {
    scanf("%s", &m[i][0]);
  }
  check(m, 0, 0);
  // printf("%s", m[0]);
  // printf("%s", m[1]);
  return 0;
}
