#include <stdio.h>

int main()
{
  char c1;
  int c2;
  printf("\nInput three characters:\n");
  c1 = getchar();
  putchar(c1);
  c2 = getchar();
  putchar(c2);
  putchar(getchar());
  putchar('\n');
  return 0;
}
