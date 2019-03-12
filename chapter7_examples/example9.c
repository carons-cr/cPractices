#include <stdio.h>

int main()
{
  int a[2][3] = {{1, 2, 1}, {2, 1, 3}};
  int b[3][4] = {{1, 1, 2, 2}, {4, 1, 1, 3}, {5, 6, 2, 1}};
  int c[2][4];
  int k;
  printf("Array a:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
      printf("%d ", a[i][j]);
    printf("\n");
  }
  printf("Array b:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
      printf("%d ", b[i][j]);
    printf("\n");
  }
  printf("Array c:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int k = 0; k < 4; k++)
    {
      c[i][k] = 0;
      for (int j = 0; j < 3; j++)
        c[i][k] += a[i][j]*b[j][k];
      printf("%d ", c[i][k]);
    }
    printf("\n");
  }
  return 0;
}
