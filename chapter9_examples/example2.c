#include <stdio.h>

int main()
{
  int a = 24, b = 25;
  int *x = &a, *y = &b, *r;
  r = x;
  *x = *y;
  printf("%d %d %p %p %p\n", *x, *y, x, y, r);
  return 0;
}
