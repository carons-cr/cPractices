#include <stdio.h>

int main()
{
  double a, b, c;
  printf("请输入三条线段的长度a b c：\n");
  scanf("%lf%lf%lf", &a, &b, &c);
  if (a > b)  
  {
    int t = a; a = b; b = t;
  }
  if (a > c)
  {
    int t = a; a = c; c = t;  
  }
  if (b > c)
  {
    int t = b; b = c; c = t;
  }
  if (a + b > c)
  {
    if (a == b && b == c)  printf("可构成等边三角形\n");
    else if (a == b || b == c || a == c)  printf("可构成等腰三角形\n");
    else if (a * a + b * b  == c * c)  printf("可构成直角三角形\n");
    else  printf("可构成三角形\n");
  }
  else  printf("不可构成三角形\n");
  return 0;
}
