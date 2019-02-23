#include <stdio.h>

int main()
{
  printf("输入30位学生的成绩:\n");
  int score;
  int count = 0;
  for(int i = 0; i < 30; i++)
  {
    scanf("%d", &score);
    if (score >= 90)
      count++; 
  }
  printf("90分以上的成绩个数为:%d\n", count);
  return 0;
}
