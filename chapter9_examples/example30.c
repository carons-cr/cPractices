#include <stdio.h>
#define M 3
#define L1 1
#define L2 2

void column(int (*a)[M], int i, int j)
{
  int *p, *r, *y, x;
  p = *a + i;
  y = *a + j;
  r = *(a + M);
  while (y < r)
  {
    x = *p;
    *p = *y;
    *y = x;
    p += M;
    y += M;
  }
}

int main()
{
  int k[M][M], (*p)[M], i, j, n = 0;
  p = k;
  for (i = 0; i < M; i++)
    for (j = 0; j < M; j++)
      scanf("%d", *(p + i) + j);
  column(k, L1, L2);
  for (i = 0; i < M; i++)
    for (j = 0; j < M; j++)
    {  
      printf("%2d", *(*(p + i) + j));
      n += 1;
      if ( n % M == 0)
        printf("\n");
    }
  return 0;
}
