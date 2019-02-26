#include <stdio.h>

int main()
{
  int i = 1;
  printf("%d, ", -i++);
  printf("i = %d\n", i);
  return 0;
}
