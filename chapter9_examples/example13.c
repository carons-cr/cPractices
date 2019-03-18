#include <stdio.h>
#include <string.h>
#define M 80

void reverse(char *q)
{
  int length;
  char *p;
  length = strlen(q);
  printf("length = %d\n", length);
  for (p = q + length - 1; q < p; q++, p--)
  {
    char tempt = *q;
    *q = *p;
    *p = tempt;
  }
}

int main()
{
  char str[M];
  printf("Enter a string which is less than 80 charavters:\n");
  scanf("%[^\n]", str);
  reverse(str);
  printf("reverse string is:%s\n", str);
  return 0;
}
