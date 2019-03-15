#include <stdio.h>

void exchangeRowij(int arr[][4], int i, int j)
{
  for (int k = 0; k < 4; k++)
  {
    int tempt = arr[i][k];
    arr[i][k] = arr[j][k];
    arr[j][k] = tempt;
  }
}

int main()
{
  int arr[3][4] = {{1, 1, 1, 1}, {3, 3, 3, 3}, {2, 2, 2, 2}};
  exchangeRowij(arr, 1, 2);
  printf("交换1、2行二维数组为:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
      printf("%d ", arr[i][j]);
    printf("\n");
  }
  return 0;
}
