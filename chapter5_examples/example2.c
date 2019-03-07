#include <stdio.h>

int main()
{
  printf("enter a integer.\n");
  int a, a1;
  scanf("%d", &a);
  a1 = a;
  if (a < 0)
    a = -a;
  printf("|%d| = %d\n", a1, a);
  return 0;
}
