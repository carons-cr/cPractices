#include <stdio.h>

int main()
{
  int x[3][3], y[3][3], c[3][3];
  printf("请输入9个数构成矩阵X:\n");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      scanf("%d", &x[i][j]);
  printf("请输入9个数构成矩阵y:\n");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      scanf("%d", &y[i][j]);
  printf("矩阵x为:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
      printf("%-4d", x[i][j]);
    printf("\n");
  }
  printf("矩阵y为:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
      printf("%-4d", y[i][j]);
    printf("\n");
  }
  printf("矩阵c = x - y为:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      c[i][j] = x[i][j] - y[i][j];
      printf("%-4d", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
