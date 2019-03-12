#include <stdio.h>

int main()
{
  int n;
  int a[100];
  int tempt;
  printf("请输入原始序列的个数:\n");
  scanf("%d", &n);
  printf("原始序列为:\n");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (int i = 0; i < n - 1; i++)
    for (int j = 1; j < n - i; j++)
      if (a [j - 1] > a[j])
      {
        tempt = a[j - 1];
        a[j - 1] = a[j];
        a[j] = tempt;
      }
  printf("由小到大冒泡排序后数组元素为:\n");
  for (int i = 0; i < n; i++)
    printf("%d  ", a[i]);
  printf("\n");
  return 0;
}
