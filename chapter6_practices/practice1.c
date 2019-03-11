#include <stdio.h>

int getGcd(int m, int n)
{
  if (n == 0)  return m;
  int t = m%n;
  m = n;
  n = t;
  return getGcd(m, n);
}

int main()
{
  int m, n;
  printf("请输入两个正整数m n:\n");
  scanf("%d%d", &m, &n);
  printf("最小公倍数为:%d\n", m*n/getGcd(m, n));
  return 0;
}
