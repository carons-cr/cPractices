#include <stdio.h>
#include <math.h>

double change(double x, double y, double *p)
{
  double m;
  m = sqrt(x*x + y*y);
  *p = atan(y/x);
  return m;
}

int main()
{
  double a, b, c, q;
  scanf("a = %lf, b = %lf", &a, &b);
  c = change(a, b, &q);
  printf("c = %lf, q = %lf\n", c, q);
  return 0;
}
