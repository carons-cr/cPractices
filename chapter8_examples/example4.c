#include <stdio.h>

void add(int a, int b)
{
  a += 3;
  b += 6;
  printf("a = %d, b = %d\n", a, b);
}

int main()
{
  int x = 1, y = 2;
  add(x, y);
  printf("x = %d, y = %d\n", x, y);
  return 0;
}
