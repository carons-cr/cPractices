#include <stdio.h>

int main()
{
  char ch1;
  int ch2;
  ch1 = 'A';
  ch2 = 'B';
  printf("%c, %c\n", ch1, ch2);
  printf("%d, %d\n", ch1, ch2);
  ch1 = 97;
  ch2 = 98;
  ch1 = ch1 + 6;
  ch2 = 98 + 6;
  printf("%c, %c\n", ch1, ch2);
  printf("%d, %d\n", ch1, ch2);
  return 0;
}
