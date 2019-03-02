#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, c, area;
  printf("Input a, b\n");
  scanf("%lf%lf", &a, &b);
  printf("a = %f, b = %f\n", a, b);
  c = sqrt(a * a + b * b);
  area = 1./2 * a * b;
  printf("c = %-7.2f", c);
  printf("area = %-7.2f\n", area);
  return 0;
}
