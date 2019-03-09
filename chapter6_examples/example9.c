#include <stdio.h>

int main()
{
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= 4 - i; j++)
      printf(" ");
    for (int k = i; k >= 1; k--)
      printf("#");
    printf("\n");
  }
  return 0;
}
