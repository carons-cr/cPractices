#include <stdio.h>
#define STUDENTS 6
#define COURSES 5

int main()
{
  float score, sum, avg;
  printf("请输入6位学生的5门成绩, 每输一位回车:\n");
  for (int i = 0; i < STUDENTS; i++)
  {
    sum = 0;
    for (int j = 0; j < COURSES; j++)
    {
      scanf("%f", &score);
      sum += score;
    }
    avg = sum / COURSES;
    printf("NO.%d avg = %6.2f\n", i + 1, avg);
  }
  return 0;
}
