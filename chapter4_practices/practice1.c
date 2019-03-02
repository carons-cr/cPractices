#include <stdio.h>

int main()
{
  char ch = 'b';
  int i = 3, j = 5;
  float x = 22.354, y = 435.6789;
  printf("ch=\'%c\',ASCII = %d\n", ch, ch);
  printf("i = %-6dj = %-d\n", i, j);
  printf("x = %-6.2fy = %-6.2f\n", x, y);
  return 0;
}
