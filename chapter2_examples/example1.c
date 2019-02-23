#include <stdio.h>

int main()
{
  int n, t, s;
  printf("请输入n:\n");
  scanf("%d", &n);
  t = 1;
  s = 1;
  while(t <= n)
  {
    s *= t;
    t++;
  }
  printf("n的阶乘为:%d\n", s);
  return 0;
}
