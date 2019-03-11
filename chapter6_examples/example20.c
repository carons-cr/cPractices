#include <stdio.h>

int main()
{
  int n, number = 1, sum = 0;
  printf("请输入n, 表示求级数前n项和:\n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    int product = 1;
    for (int j = 0; j < i; j++)
    {
      product *= number; 
      number++;
    }
    sum += product;
  }
  printf("sum = %d\n", sum);
  return 0;
}
