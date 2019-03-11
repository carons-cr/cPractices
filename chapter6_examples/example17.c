#include <stdio.h>
#include <math.h>

int main()
{
  int n = 100;
  double a, b, h, s;
  printf("Input a, b:\n");
  scanf("%lf%lf", &a, &b);
  h = (b - a)/n;
  s = 0.5*(sin(a) + sin(b))*h;
  for (int i = 1; i <= n-1; i++)
  {
    s += sin(a + h*i)*h;
  }
  printf("s = %8.4lf\n", s);
  return 0;
}
