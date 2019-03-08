#include <stdio.h>

int main()
{
  char ch;
  printf("enter a character:\n");
  scanf("%c", &ch);
  if (ch >= 'A' && ch <= 'Z')
    ch += 32;
  else if (ch >= 'a' && ch <= 'z')
    ch -= 32;
  printf("%c\n", ch);
  return 0;
}
