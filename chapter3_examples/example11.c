#include <stdio.h>

int main()
{
  int i = 1;
  int j = 1;
  int m;
  m = i++;
  printf("i = %d, m = %d\n", i, m);
  m = ++j;
  printf("j = %d, m = %d\n", j, m);
  printf("i = %d, j = %d\n", i--, --j);
  return 0;
}
