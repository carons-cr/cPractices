#include <stdio.h>

int sum(int x, int y)
{
  return (x + y);
}

int main()
{
  int a = 6, b;
  b = sum(a, a += 4);
  printf("b = %d\n", b);
  return 0;
}
