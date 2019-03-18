#include <stdio.h>

int main()
{
  char *p = "I am a student";
  int i = 0;
  while (p[i])
    printf("%c", p[i++]);
  printf("\n");
  return 0;
}
