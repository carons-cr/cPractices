#include <stdio.h>

char *search(char *str, char x)
{
  int p = 0;
  while (x != str[p] && str[p] != '\0')
    p++;
  return (&str[p]);
}

int main()
{
  char str[40];
  char *p;
  char x;
  char *search(char *, char);
  printf("input string:");
  scanf("%[^\n]%*c", str);
  printf("input a charater:");
  scanf("%c", &x);
  p = search(str, x);
  if (*p)
  {
    printf("%c", *p);
    while (p - str)
      printf("%c", *--p);
    printf("\n");
  }
  else
    printf("character %c is not fount\n", x);
  return 0;
}
