#include <stdio.h>

void printStr(int num)
{
  char str[10];
  int i = 0;
  num = num < 0 ? printf("-"), -num : num;
  while (num > 0)
  {
    str[i++] = num % 10 + '0';
    num /= 10;
  }
  while (--i >= 0)
    printf("%c", str[i]);
  printf("\n");
}

int main()
{
  printf("The converted string: ");
  printStr(-178);
  return 0;
}
