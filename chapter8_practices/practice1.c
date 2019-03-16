#include <stdio.h>

void printMinInDiagonal(int arr[][5], int len)
{
  int min = arr[0][0];
  for (int i = 1; i < len; i++)
    if (arr[i][i] < min)
      min = arr[i][i];
  printf("min = %d\n", min);
}

int main()
{
  int arr[5][5];
  printf("请换行输入5x5数组:\n");
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
      scanf("%d", &arr[i][j]);
  }
  printMinInDiagonal(arr, 5);
  return 0;
}
