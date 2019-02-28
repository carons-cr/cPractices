#include <stdio.h>

int main()
{
  char c1 = 'A', c2 = 66;
  int c3 = '\103', c4;
  c4 = c3 + 1;
  putchar(c1);
  putchar(c2);
  putchar('\n');
  putchar(c3);
  putchar(c4);
  putchar('\n');
  return 0;
}
