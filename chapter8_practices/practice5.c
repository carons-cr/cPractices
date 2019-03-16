#include <stdio.h>
#include <math.h>

void printTwoRoots(int a, int b, int c)
{
  double x1, x2;
  int disc;
  disc = b*b - 4*a*c;
  x1 = (-b + sqrt(disc))/(2.0*a);
  x2 = (-b - sqrt(disc))/(2.0*a);
  printf("x1 = %lf, x2 = %lf\n", x1, x2);
}

void printRepeatRoots(int a, int b, int c)
{
  double x;
  x = -b/(2.0*a);
  printf("x1 = x2 = %lf\n", x);
}

void printComplexRoots(int a, int b, int c)
{
  double realPart, imagPart;
  int disc;
  disc = b*b - 4*a*c;
  realPart = -b/(2.0*a);
  imagPart = sqrt(-disc)/(2.0*a);
  printf("x1 = %lf + %lfi, x2 = %lf - %lfi\n", realPart, imagPart, realPart, imagPart);
}

int main()
{
  int a, b, c, disc;
  printf("input a b c:\n");
  scanf("%d%d%d", &a, &b, &c);
  disc = b*b - 4*a*c;
  if (disc > 0)
    printTwoRoots(a, b, c);
  else if (disc == 0)
    printRepeatRoots(a, b, c);
  else
    printComplexRoots(a, b, c);
  return 0;
}
