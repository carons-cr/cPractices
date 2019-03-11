#include <stdio.h>

double getY(double x)
{
  double sum = 0;
  for (int i = 0; i < 10; i++)
  {
    double m = 1, n = 2*i + 1;
    for (int j = 0; j < 2*i + 1; j++)
    {
      m *= x;
    }
    for (int k = 1; k <= i; k++)
    {
      n *= k;
    }
    sum += m/n;
  }
  return sum;
}

int main()
{
  double x1 = 0.5, x2 = 1.0, x3 = 2.0, x4 = 3.0;
  printf("x = %lf, y = %lf\n", x1, getY(x1));
  printf("x = %lf, y = %lf\n", x2, getY(x2));
  printf("x = %lf, y = %lf\n", x3, getY(x3));
  printf("x = %lf, y = %lf\n", x4, getY(x4));  
  return 0;
}
