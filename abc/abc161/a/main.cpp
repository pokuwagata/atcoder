#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
  int a, b, c, tmp;
  int d[2] = {1, 2};
  scanf("%d %d %d", &a, &b, &c);
  swap(d[0] ,d[1]);
  printf("%d %d %d", a, b, c);
  printf("%d %d", d[0], d[1]);
  return 0;
}