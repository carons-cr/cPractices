#include <stdio.h>

int main()
{
  int i = 1, sum = 0;
  while (i <= 10)
  {
    sum += i * i;
    i++;
  }
  printf("sum = %d\n", sum);
  return 0;
}
