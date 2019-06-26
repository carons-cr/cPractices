#include <stdio.h>

int main()
{
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int *p[2];
  for (int i = 0; i < 2; i++)
  {
    p[i] = arr[i];
  }
  double avg[2];
  int sum;
  for (int i = 0; i < 2; i++)
  {
    sum = 0;
    for (int j = 0; j < 3; j++)
    {
      sum += p[i][j];
    }
    avg[i] = sum/3.0;
    printf("第%d行元素的平均值%lf\n", i + 1, avg[i]);
  }
  return 0;
}
