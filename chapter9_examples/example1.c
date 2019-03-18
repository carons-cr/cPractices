#include <stdio.h>

int main()
{
  int x, *p;
  x = 40;
  p = &x;
  printf("%d %p\n", x, p);
  x = 78;
  *p = x;
  printf("%d %d\n", x, *p);
  return 0;
}
