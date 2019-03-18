#include <stdio.h>

int main()
{
  char *p = "C Language";
  for (; *p != '\0'; )
    putchar(*++p);
  printf("\n");
  return 0;
}
