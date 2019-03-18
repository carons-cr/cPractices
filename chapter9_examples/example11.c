#include <stdio.h>

void display(char *t)
{
  char s[] = "Happy";
  printf("%s\n", t);
  t = s;
  printf("%s\n", t);
}

int main()
{
  char *p = "Teacher";
  display(p);
  printf("%s\n", p);
  return 0;
}
