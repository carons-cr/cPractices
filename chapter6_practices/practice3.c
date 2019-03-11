#include <stdio.h>

int main()
{ 
  double y = 50;
  double max = y;
  double min = y;
  for (double x = 0; x <=2; x += 0.2)
  {
    y = 2*x*x*x - 3*x*x*x*x + 6*x*x*x*x*x - 4*x + 50;
    printf("y的值为:%lf\n", y);
    if (y > max)  max = y;
    if (y < min)  min = y;
  }
  printf("y的最大值为%lf, 最小值为%lf\n", max, min);
  return 0;
}
