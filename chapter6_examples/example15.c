#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  double a, b, x, sum = 0.0;
  printf("请输入弧度x 求和公式的项数n:\n");
  scanf("%lf%d", &x, &n);
  x *= 3.141593/180;
  for (int i = 1; i <= n; i++)
  {
    a = b = 1.0;
    for (int j = 1; j <= 2*i - 1; j++)
    {
      a *= x;
      b *= j;
    } 
    sum += pow(-1, i + 1)*a/b;
  }
  printf("sinx = %lf\n", sum);
  return 0;
}
