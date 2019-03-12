#include <stdio.h>

int main()
{
  int c[3][4] = {{2, 1, 4, 5}, {3, 2, 1, 2}, {0, 1, 2, 1}};
  int sum = 0;
  printf("原始数组为:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i == 0 || i == 2 || j == 0 || j == 3)
        sum += c[i][j];
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }
  printf("外围元素之和为:%d\n", sum);
  return 0;
}
