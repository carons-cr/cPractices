#include <stdio.h>
#define N 4

int main()
{
  int a[N][N];
  int *p[N];
  int sum = 0;
  for (int i = 0; i < N; i++)
    p[i] = a[i];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      scanf("%d", p[i] + j);
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      if (i + j == N -1)
        sum += p[i][j];
  printf("sum = %d\n", sum);
  return 0;
}
