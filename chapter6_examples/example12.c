#include <stdio.h>

int main()
{
  int sum = 0;
  char c;
  for (int i = 0; i < 100; i++)
  {
    c = getchar();
    if (c < '0' || c > '9')
      continue;
    sum++;
  }
  printf("sum = %d\n", sum);
  return 0;
}
