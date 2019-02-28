#include <stdio.h>

int main()
{
  float x = 12.345;
  double y = 2.346;
  printf("x1 = %f, x2 = %6.2f, x3 = %-6.2f, x4 = %.2f\n", x, x, x, x);
  printf("x5 = %e, x6 = %10.2e, x7 = %-10.2e, x8 = %.2e\n", x, x, x, x);
  printf("y1 = %f, y2 = %6.2f, y3 = %-6.2f, y4 = %.2f\n", y, y, y, y);
  printf("y5 = %lf, y6 = %6.2lf, y7 = %-6.2lf, y8 = %.2lf\n", y, y, y, y);  
  return 0;
}
