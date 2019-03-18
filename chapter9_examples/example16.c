#include <stdio.h>
#include <math.h>

double f(double z)
{
  double d;
  d = pow(z, 4.0) + z - 1;
  return d;
}

int main()
{
  double r;
  double (*y)(double);
  y = f;
  for (int i = 1; i <= 4; i++)
  {
    double x = i + 0.5;
    r = (*y)(x);
    printf("x = %lf, y = %lf\n", x, r);
  }
  return 0;
}
