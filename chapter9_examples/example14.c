#include <stdio.h>

char *dealStr(char *str)
{
  int i = 1;
  if (*str >= 'a' && *str <= 'z')
    *str -= 32;
  while (*(str + i) != '\0')
  {
    if (*(str + i) >= 'A' && *(str + i) <= 'Z')
      *(str + i) += 32;
    i++;
  }
  return str;
}

int main()
{
  char str[40];
  printf("Please input origin string:");
  scanf("%[^\n]", str);
  printf("correct string is:%s\n", dealStr(str));
  return 0;
}
