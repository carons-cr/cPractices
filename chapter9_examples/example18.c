#include <stdio.h>

void matrix(int *x, int *y, int *z)
{
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 4; j++)
      *(z + 4*i + j) = *(x + 4*i + j) + *(y + 4*i + j);
}

int main()
{
  int *p, a[3][4], b[3][4], c[3][4];
  printf("input array a:\n");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 4; j++)
      scanf("%d", a[i] + j);
  printf("input array b:\n");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 4; j++)
      scanf("%d", *(b + i) + j);
  printf("input array c:\n");
  matrix(*a, b[0], &c[0][0]);
  p = c[0];
  for (int i = 0; p < c[0] + 12; p++, i++)
  {
    if (i % 4 == 0)
      printf("\n");
    printf("%-4d", *p);
  }
  printf("\n");
  return 0;
}
