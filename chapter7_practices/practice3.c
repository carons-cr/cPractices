#include <stdio.h>
#define N 7

int main()
{
  int arr[N][N];
  for (int i = 0; i < N; i++)
  {
    arr[i][i] = arr[i][0] = 1;
    for (int j = 1; j < i; j++)
      arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
  }
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j <= i; j++)
      printf("%-4d", arr[i][j]);
    printf("\n");
  }
  
  return 0;
}
