#include <stdio.h>

int main()
{
  int m, n;
  printf("Please input two numbers:\n");
  scanf("%d%d", &m, &n);
  L1:if (m == n)
    goto L2;
  if (m < n)
  {
    int c = m;
    m = n;
    n = c;
  }
  m -= n;
  goto L1;
  L2:printf("The gcd of this two numbers is %d\n", m);
  return 0;
}
