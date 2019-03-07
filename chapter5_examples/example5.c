#include <stdio.h>

int main()
{
  int a, b, min;
  printf("enter two integers:\n");
  scanf("%d%d", &a, &b);
  min = (a < b) ? a : b;
  printf("min = %d\n", min);
  return 0;
}
