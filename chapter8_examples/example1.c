#include <stdio.h>

float cube(float x)
{
  return (x*x*x);
}

int main()
{
  float x, y;
  printf("Please input x:\n");
  scanf("%f", &x);
  y = cube(x);
  printf("The cube of %6.2f is %6.2f\n", x, y);
  return 0;
}
