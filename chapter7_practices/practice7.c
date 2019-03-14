#include <stdio.h>
#define N 5

int main()
{
  int S[N][N];
  int sum = 0;
  printf("请输入25个数构成矩阵S:\n");
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      scanf("%d", &S[i][j]);
  printf("矩阵S为:\n");
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%-4d", S[i][j]);
      if (j > i)  sum += S[i][j];
    }
    printf("\n");
  }
  printf("S上半三角元素之和为%d\n", sum);
  return 0;
}
