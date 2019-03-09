#include <stdio.h>
 
int main()
{
  int i, sum = 0;
  while (scanf("%d", &i), i != 0)
    sum += i;
  printf("sum = %d\n", sum);
  return 0;
}
