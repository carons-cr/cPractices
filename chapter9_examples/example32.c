#include <stdio.h>

void string(char *str1, char *str2)
{
  while(*++str1 != '\0');
  while((*str1++ = *str2++) != '\0');
}

int main()
{
  char ch1[40], ch2[20], *p1 = ch1, *p2 = ch2;
  printf("Enter ch1:\n");
  gets(p1);
  printf("Enter ch2:\n");
  gets(p2);
  string(p1, p2);
  printf("ch1 + ch2 = %s\n", ch1);  
  return 0;
}
