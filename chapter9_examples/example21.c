#include <stdio.h>

int main()
{
  int i, *q, (*p)[4], a[3][4] = {{2, 4, 6, 8}, {10, 12, 14, 16}, {18, 20, 22, 24}};
  q = a[0];
  for (i = 1; i <= 4; q += 2, i++)
    printf("%d\t", *q);

  printf("\n");
  p = a;
  for (i = 2; i >= 0; i--)
    printf("%d\t", *(p[i] + i));
  printf("\n");
  return 0;
}
