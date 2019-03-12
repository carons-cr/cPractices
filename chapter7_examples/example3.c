#include <stdio.h>

int main()
{
  int f[20] = {1, 1};
  for (int i = 2; i < 20; i++)
    f[i] = f[i - 1] + f[i - 2];
  printf("斐波那契数列为:");
  for (int i = 0; i < 20; i++)
  {
    if (i % 5 == 0)  printf("\n");
    printf("%6d", f[i]);
  } 
  printf("\n");
  return 0;
}
