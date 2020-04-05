#include <stdio.h>
using namespace std;

int main()
{
  char ch;
  int counter[26] = {0};
  while ((ch = getchar()) != '\n')
  {
    if (ch >= 'A' && ch <= 'Z') {
      ch = ch + 32;
    }
    if (ch >= 'a' && ch <= 'z')
    {
      int num = ch - 'a';
      counter[num]++;
    }
  }
  for (int i = 0; i < 26; i++)
  {
    printf("%c : %d\n", i + 'a', counter[i]);
  }
  return 0;
}