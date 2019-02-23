#include <stdio.h>

int getFactorial(int n)
{
  int N;
  if (n == 0)
    N = 1;
  else
    N = n * getFactorial(n - 1);
  return N;
}

int main()
{
  int n, N;
  printf("输入n:\n");
  scanf("%d", &n);
  N = getFactorial(n);
  printf("n的阶乘为:%d\n", N);
  return 0;
}
