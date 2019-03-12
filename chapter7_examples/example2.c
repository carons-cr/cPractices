#include <stdio.h>

int main()
{
  int num[10];
  int p = 0, n = 0, z = 0;
  printf("请输入10个数据:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &num[i]);
    if (num[i] > 0)  p++;
    else if (num[i] < 0)  n++;
    else  z++;
  }
  printf("正数的个数为%d, 负数的个数为%d, 0的个数为%d\n", p, n, z);
  return 0;
}
