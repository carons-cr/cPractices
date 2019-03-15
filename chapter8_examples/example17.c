#include <stdio.h>

int func(int a)
{
  int b = 1;
  static int c = 2;
  --a;
  b = b + a + c++;
  return b;
}

int main()
{
  int t = 3;
  t = func(t);
  printf("%d\t", t);
  t = func(t);
  printf("%d\n", t);
  return 0;
}

