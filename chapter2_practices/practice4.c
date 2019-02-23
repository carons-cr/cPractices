#include <stdio.h>

int main()
{
  int number, max;
  printf("输出10个数:\n");
  scanf("%d", &number);
  max = number;
  for (int i = 1; i < 10; i++)
  {
    scanf("%d", &number);
    if (number > max)
      max = number;
  }
  printf("最大的数为:%d\n", max);
  return 0;
}
