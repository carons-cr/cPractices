#include <stdio.h>

int main()
{
  int x[5] = {2, 4, 6, 8, 10}, *y[5], **a, b, i;
  for (i = 0; i < 5; i++)
    y[i] = &x[i];
  a = y;
  for (b = 4; b >= 0; b--)
  {
    printf("%3d", **a);
    a++;
  }
  printf("\n");
  return 0;
}
