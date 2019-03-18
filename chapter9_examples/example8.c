#include <stdio.h>

int main()
{
  char str[20];
  char *p = str;
  printf("Input a string: ");
  scanf("%[^\n]", str);
  while (*++p);
  printf("Length of the string is %ld\n", p - str);
  return 0;
}
