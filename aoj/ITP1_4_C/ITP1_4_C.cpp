#include <stdio.h>
using namespace std;

int main()
{
  while (1)
  {
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    if (op == '?')
      break;
    switch (op)
    {
    case '+':
      printf("%d\n", a + b);
      break;
    case '-':
      printf("%d\n", a - b);
      break;
    case '*':
      printf("%d\n", a * b);
      break;
    case '/':
      printf("%d\n", a / b);
      break;
    default:
      break;
    }
  }

  return 0;
}