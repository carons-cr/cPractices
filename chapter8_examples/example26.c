#include <stdio.h>

double getRectangleArea()
{
  double length, width;
  printf("请输入矩形的长 宽:\n");
  scanf("%lf%lf", &length, &width);
  return length*width;
}

double getCircleArea()
{
  double radius;
  printf("请输入圆的半径:\n");
  scanf("%lf", &radius);
  return 3.1415926*radius*radius;
}

double getTriangleArea()
{
  double bottom, height;
  printf("请输入三角形的底边和高:\n");
  scanf("%lf%lf", &bottom, &height);
  return bottom*height/2.0;
}

int main()
{
  int choice;
  do
  {
    printf("     ----功能选项----\n");
    printf("     1--计算矩形的面积\n");
    printf("     2--计算圆的面积\n");
    printf("     3--计算三角形面积\n");
    printf("     0--退出\n");
    printf("请选择: \n");
    scanf("%d", &choice);
    switch (choice)
    {
      case 1:  printf("矩形面积为:%.2f\n", getRectangleArea());break;
      case 2:  printf("圆的面积为:%.2f\n", getCircleArea());break;
      case 3:  printf("三角形面积为:%.2f\n", getTriangleArea());break;
      case 0:  break;
      default:  printf("只能输入0~3的数字, 请重新输入!\n");break;
    }
  }while(choice != 0);
  printf("谢谢使用!\n");
  return 0;
}
