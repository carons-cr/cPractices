#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int arr[4][4];
  long product = 1;
  srand(time(NULL));
  printf("随机生成的4行4列数组为:\n");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      arr[i][j] = rand() % 100;
      printf("%d  ", arr[i][j]);
      if (i == j || i + j == 3)
        product *= arr[i][j];
    }
    printf("\n");
  }
  printf("主对角线元素之积为%ld\n", product);
  return 0;
}
