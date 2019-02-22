#include <stdio.h>

double area(double h, double w)
{
  double s;
  s = h * w;
  return s;  
}

int main()
{
  double h1, h2, w1, w2, s1, s2;
  h1 = 10.5;
  w1 = 20.5;
  h2 = 1.5 * h1;
  w2 = 1.5 * w1;
  s1 = area(h1, w1);
  s2 = area(h2, w2);
  printf("sum of the area of two rectangles = %6.2f\n", s1 + s2); 
  return 0;
}
