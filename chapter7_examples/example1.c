#include <stdio.h>

int main()
{
  int a[5];
  int tempt;
  printf("请输入5个元素，为原始序列:\n");
  for (int i = 0; i < 5; i++)
    scanf("%d", &a[i]);
  tempt = a[4];

  for (int i = 4; i > 0; i--)
    a[i] = a[i - 1];
  a[0] = tempt;

  printf("操作后数据序列为:\n");
  for(int i = 0; i < 5; i++)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}
