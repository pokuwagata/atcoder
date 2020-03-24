#include <stdio.h>
using namespace std;

int main() {
  int n, r, j;
  char t;
  bool a[4][13]
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%c", &t);
    scanf("%c %d", &t, &r);
    
    switch (t)
    {
    case 'S':
      j = 0;
      break;
    case 'H':
      j = 1;
      break;
    case 'C':
      j = 2;
      break;
    case 'D':
      j = 3;
      break;
    
    default:
      break;
    }

    a[j][r] = true;
  }

  for(int i=0; i<4; i++) {
    for(int j=0; j<13; j++) {
      if(a[i][j] == false) {
        printf("%c %d", )
      }
    }
  }
  
  return 0;
}