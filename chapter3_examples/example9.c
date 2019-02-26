#include <stdio.h>

int main()
{
  double y = 7.56;
  int a = 2, b;
  b = (int)y % a;
  printf("b = %d, ", b);
  printf("y = %f\n", y);
  return 0;
}

