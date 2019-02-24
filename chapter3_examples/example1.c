#include <stdio.h>
#define PI 3.1415926

int main()
{
  double r = 18.5;
  double area, length;
  area = PI * r * r;
  length = 2 * PI * r;
  printf("area = %6.2f, length = %6.2f\n", area, length);
  return 0;
}

