#include <stdio.h>

void printAveragePerCourse(double stuScores[][5], int stuNumber)
{
  double average[5];
  for (int i = 0; i < 5; i++)
  {
    double sum = 0;
    for (int j = 0; j < stuNumber; j++)
    {
      sum += stuScores[j][i];
    }
    average[i] = sum/stuNumber;
    printf("average of course %d is %.2lf\n", i + 1, average[i]);
  }
}

void printStuACourseWithHighestScore(double stuScores[][5], int stuNumber)
{
  int stuNo, courseNo;
  double highestScore;
  highestScore = stuScores[0][0];
  for (int i = 0; i < stuNumber; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (stuScores[i][j] > highestScore)
      {
        highestScore = stuScores[i][j];
        stuNo = i + 1;
        courseNo = j + 1;
      }
    }
  }
  printf("highestScore is belong to stu %d and course %d\n", stuNo, courseNo);
}

int main()
{
  double stuScores[10][5];
  printf("输入10名学生5门课的成绩:\n");
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 5; j++)
      scanf("%lf", &stuScores[i][j]);
  printAveragePerCourse(stuScores, 10);
  printStuACourseWithHighestScore(stuScores, 10);
  return 0;
}
