#include <stdio.h>
#include <stdlib.h>

int main()
{
  int y, m, d;
  printf("请输入今天的日期年 月 日：\n");
  scanf("%d%d%d", &y, &m, &d);
  if (y < 1 || m < 1 || m > 12 || d < 1 || d > 31)
  {
    printf("输入错误，请输入正确的年 月 日！\n");
    exit(0);
  }
  switch(m)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
           if (d == 31)  printf("明天的日期为%d年%d月%d日\n", y, m + 1, 1);
           else  printf("明天的日期为%d年%d月%d日\n", y, m, d + 1);
           break;
    case 12:
           if (d == 31)  printf("明天的日期为%d年%d月%d日\n", y + 1, 1, 1);
           else  printf("明天的日期为%d年%d月%d日\n", y, m, d + 1);
           break;
    case 4:
    case 6:
    case 9:
    case 11:  
           if (d == 30)  printf("明天的日期为%d年%d月%d日\n", y, m + 1, 1);
           else  printf("明天的日期为%d年%d月%d日\n", y, m, d + 1);
           break;
    case 2:
          if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
            if (d == 29)  printf("明天的日期为%d年%d月%d日\n", y, m + 1, 1);
            else  printf("明天的日期为%d年%d月%d日\n", y, m, d + 1);
          else 
            if (d == 28)  printf("明天的日期为%d年%d月%d日\n", y, m + 1, 1);
            else  printf("明天的日期为%d年%d月%d日\n", y, m, d + 1);
          break;
  }
  return 0;
}
