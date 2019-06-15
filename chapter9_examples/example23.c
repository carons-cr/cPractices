#include <stdio.h>

void swap(int **m, int **n)
{
  int *i;
  i = *m;
  *m = *n;
  *n = i;
}

int main()
{
  int a, b, *pa, *pb;
  pa = &a;
  pb = &b;
  scanf("a = %d, b = %d", pa, pb);
  swap(&pa, &pb);
  printf("pa = %d, pb = %d\n", *pa, *pb);
  printf("a = %d, b = %d\n", a, b);
  return 0;
}
