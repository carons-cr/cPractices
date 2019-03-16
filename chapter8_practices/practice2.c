#include <stdio.h>

double getPower(double x, int n)
{
  if (x == 0)  return 0;
  else if (n == 0)  return 1;
  else if (n > 0)  return x*getPower(x, n - 1);
  else  return 1.0/x*getPower(x, n + 1);
}

int main()
{
  double x;
  int n;
  printf("Please input x n:\n");
  scanf("%lf%d", &x, &n);
  printf("x^n = %.2lf\n", getPower(x, n));
  return 0;
}
