#include <stdio.h>

void printStr(char *a)
{
  printf("%s\n", a);
}

int main()
{
  char *p;
  p = "Happy";
  printStr(p);
  return 0;
}
