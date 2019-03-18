#include <stdio.h>

int main()
{
  char *p;
  char a = 'A', b = 'B';
  p = "a = %d, b = %d\n";
  printf(p, a, b);
  return 0;
}
