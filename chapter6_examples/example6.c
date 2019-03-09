#include <stdio.h>
#include <math.h>

int main()
{
  float a, x0, x1;
  printf("请输入一个实数:\n");
  scanf("%f", &a);
  x1 = a;
  do{
    x0 = x1;
    x1 = (x0 + a/x0)/2;
  }while (fabs(x1 - x0) > 1e-5);
  printf("a = %f, squart(a) = %f\n", a, x1);
  return 0;
}
