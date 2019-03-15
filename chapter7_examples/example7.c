#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  int grade[10][4];
  int sum;
  double average;  
  srand(time(NULL));

  for (int i = 0; i < 10; i++)
  {
    sum = 0;
    for (int j = 0; j < 4; j++)
    {
      grade[i][j] = rand() % 90 + 10;
      sum += grade[i][j];
    }
    average = sum/4.0;
    printf("the average score of student %d is %.2lf\n", i + 1, average);
  }
  return 0;
}
