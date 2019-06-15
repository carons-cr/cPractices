#include <stdio.h>

int amin(int array[][4])
{
  int i, j, min;
  min = array[0][0];
  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++)
      if (min > array[i][j])
        min = array[i][j];
  return min;
}

int main()
{
  int i, j;
  int a[3][4], (*p)[4];
  p = a;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++)
      scanf("%d", *(p + i) + j);
  printf("MIN  = %d\n", amin(p));
}
