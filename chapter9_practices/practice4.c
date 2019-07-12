#include <stdio.h>

char* input(char *str)
{
  char c = getchar();
  while (c != '\n')
  {
    *str++ = c;
    c = getchar();
  }
  return str;
}
 
int output(char *str)
{
  while(*str != '\0')
    putchar(*str++);
  putchar('\n');
  return 0;
}

int main()
{
  printf("input == gets: \n");
  char s[100], *str = s;
  input(str);
  output(str);
  return 0;
}
