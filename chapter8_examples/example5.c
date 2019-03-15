#include <stdio.h>

int max(float a, float b)
{
  float c;
  c = a > b ? a : b;
  return c;
}

int main()
{
  float x, y;
  printf("Please enter two float number.\n");
  scanf("%f%f", &x, &y);
  printf("max = %d\n", max(x, y));
  return 0;
}
