#include <stdio.h>

int main()
{
  short a = -12345;
  short b = 23456;
  long sum1;
  unsigned short c = 52800;
  unsigned long sum2;
  sum1 = b - a;
  sum2  = c + b;
  printf("sum1 = %ld, sum2 = %lu\n", sum1, sum2);
  return 0;
}
