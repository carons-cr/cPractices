#include <stdio.h>

int main()
{
  int sum = 0;
  for (int i = 1; i <= 10; i++)
  {
    sum += i * i;
  }
  printf("sum = %d\n", sum);
  return 0;
}
