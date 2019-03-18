#include <stdio.h>

int main()
{
  int a[10];
  int *p, *q;
  int sum = 0;
  printf("请输入10个数:\n");
  for (p = a + 9, q = a; p >= q; p--)
    scanf("%d", p);
  q = a + 10;
  p = a;
  while (p < q)
  {
    sum += *p;
    ++p;
  }
  printf("sum = %d\n", sum);
  return 0;
}
