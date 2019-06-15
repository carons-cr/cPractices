#include <stdio.h>

int main()
{
  float a[4] = {1, 2, 3, 5}, *p1, *p3;
  void *p2 = a;
  p1 = (float *)p2;
  p2 = (void *)p1;
  p3 = &a[2];
  p2 = p3;
  p3 = p2;
  printf("a = %p, p1 = %p, p2 = %p, p3 = %p, *p3 = %f\n", a, p1, p2, p3, *p3);
  return 0;
}
