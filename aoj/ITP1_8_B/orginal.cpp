#include <stdio.h>
using namespace std;

int main() {
  while (1)
  {
    char num[1000] = {'\0'};
    int sum=0;
    sscanf("%d", num);
    // printf("%d", num[0]-'0');
    if((int)num[0] == 0) break;
    for(int i=0; num[i] != '\0'; i++) {
      sum+=(int)(num[i]);
    }
    printf("%d\n", sum);
  }
  
  return 0;
}