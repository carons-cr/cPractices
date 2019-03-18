#include <stdio.h>

int main()
{
  int a[10];
  int *p, *q;
  int r;
  p = &a[2];
  q = &a[4];
  r = q - p;
  printf("q = %p\tp = %p\tq - p = %d\n", q, p, r);
  return 0;
}
