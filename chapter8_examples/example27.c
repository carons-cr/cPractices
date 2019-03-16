#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
#define MAX_NUMBER 100
#define MIN_NUMBER 1
#define MAX_TIMES 7

int makeNumber()
{
  int number = rand() % MAX_NUMBER + MIN_NUMBER;
  assert(number >= MIN_NUMBER && number <= MAX_NUMBER);
  return number;
}

void guessNumber(int number)
{
  int guess;
  int times = 0;
  assert(number >= MIN_NUMBER && number <= MAX_NUMBER);
  do 
  {
    times++;
    printf("Round %d:", times);
    scanf("%d%*c", &guess);  //吸收掉换行符
    if (guess > number)  printf("Wrong! Too high.\n");
    if (guess < number)  printf("Wrong! Too low.\n");
  }while (guess != number && times < MAX_TIMES);
  if (guess == number)
    printf("Congratulations! You are right!\n");
  else
    printf("Misson failed after %d attempts.\n", MAX_TIMES);
}

int main()
{
  int number;
  char isContinue;
  srand(time(NULL));
  do 
  {
    number = makeNumber();
    guessNumber(number);
    printf("Continue?(Y/N):");
    isContinue = getchar();
    while (getchar() != '\n');  //吸收掉换行符及其之前所有无效字符
  }while (isContinue != 'N' && isContinue != 'n');
  return 0;
}
