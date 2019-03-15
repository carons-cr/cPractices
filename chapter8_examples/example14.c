#include <stdio.h>

void printStr(int num)
{
  if (num/10 != 0)  printStr(num/10);
  printf("%c", num % 10 + '0');
}

int main()
{
  int num;
  printf("Please input an integer number:\n");
  scanf("%d", &num);
  printf("The string is: ");
  if (num < 0)
  {
    printf("-");
    num = -num;
  }
  printStr(num);
  printf("\n");
  return 0;
}
