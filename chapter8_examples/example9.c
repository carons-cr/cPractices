#include <stdio.h>

int isPalindrome(char str[])
{
  int len = 0;
  while (str[len] != '\0')
    len++;
  for (int i = 0; i < len; i++)
    if (str[i] != str[len - 1 - i])
      return 0;
  return 1;
  
}

int main()
{
  char str[80];
  printf("Please enter string:\n");
  scanf("%[^\n]", str);
  isPalindrome(str) ? printf("%s是回文\n", str) : printf("%s不是回文\n", str);
  return 0;
}
