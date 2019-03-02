#include <stdio.h>

int main()
{
  char c;
  int i, j;
  float x, y;
  printf("Input c, i, j, x, y\n");
  scanf("%c, %d, %d, %f, %f", &c, &i, &j, &x, &y);
  printf("ch = \'%c\', ASCII = %d\n", c, c);
  printf("i = %-3d, j = %d\n", i, j);
  printf("x = %-8.2f, y = %.2f\n", x, y);
  return 0;
}
