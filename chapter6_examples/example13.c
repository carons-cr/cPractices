#include <stdio.h>

int main()
{
  int sum = 0;
  for (int i = 0; i <= 10; sum += i * i, i++);
  printf("sum = %d\n", sum);
  return 0;
}
