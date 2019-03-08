#include <stdio.h>
#include <stdlib.h>

int main()
{
  int score;
  char grade;
  printf("请输入一个百分制成绩：\n");
  scanf("%d", &score);
  if (score < 0 || score > 100)  
  {
    printf("输入错误，请输入百分制成绩！\n");
    exit(0);
  }
  switch(score/10)
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:  grade = 'E';break;
    case 6:  grade = 'D';break;
    case 7:  grade = 'C';break;
    case 8:  grade = 'B';break;
    case 9:  
    case 10:  grade = 'A';break;
  }
  printf("成绩等级为%c\n", grade);
  return 0;
}
