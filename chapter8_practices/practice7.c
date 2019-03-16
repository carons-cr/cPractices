#include <stdio.h>

double keepTwoDecimal(double num)
{
  double result;
  if (num*100 >= (int)(num*100) + 0.5)
    result = (int)(num*100 + 1)/100.0;
  else 
    result = (int)(num*100)/100.0;
  return result;
} 

int main()
{
  double num;
  printf("请输入一个小数:\n");
  scanf("%lf", &num);
  num = keepTwoDecimal(num);
  printf("保留两位小数, 对第三位小数进行四舍五入:%lf\n", num);
  return 0;
}
