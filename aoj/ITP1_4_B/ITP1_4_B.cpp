#include <stdio.h>
using namespace std;

int main() {
  double r, pi = 3.141592653589;
  scanf("%lf", &r);
  printf("%.6lf %.6lf", pi * r * r, 2 * pi * r); 
  return 0;
}