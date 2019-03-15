#include <stdio.h>
#define MAX(a, b)  a > b ? a : b
#define SQR(c)  c*c

int main()
{
  int x = 3, y = 4;
  x = MAX(x, y);
  y = SQR(x);
  printf("x = %d, y = %d\n", x, y);
  return 0;
}
