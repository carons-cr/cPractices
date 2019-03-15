#include <stdio.h>

double aver(int arr[], int len)
{
  double sum = 0;
  for (int i = 0; i < len; i++)
    sum += arr[i];
  return sum/len;
}

int main()
{
  int arr[10];
  printf("请输入10个数组元素:\n");
  for (int i = 0; i < 10; i++)
    scanf("%d", &arr[i]);
  printf("平均值 = %lf\n", aver(arr, 10));
  return 0;
}
