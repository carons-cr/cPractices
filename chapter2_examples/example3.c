#include <stdio.h>

int main()
{
  int day, number;
  day = 7;
  number = 1;
  while (day != 1) 
  {
    number = (number + 1) * 2;
    day--;
  }  
  printf("小猴摘了%d个桃子\n", number);
  return 0;
}
