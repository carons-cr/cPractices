#include <stdio.h>

int main()
{
  int arr[10];
  printf("请输入10个整数:\n");
  for (int i = 0; i < 10; i++)
    scanf("%d", &arr[i]);
  for (int i = 0; i < 10 - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < 10; j++)
    {
      if (arr[j] < arr[min])
        min = j;
    }
    if (min != i)
    {
      int tempt = arr[i];
      arr[i] = arr[min];
      arr[min] = tempt;
    }
  }
  printf("从小到大排序后数据为:\n");
  for (int i = 0; i < 10; i++)
    printf("%d  ", arr[i]);
  printf("\n");
  return 0;
}
