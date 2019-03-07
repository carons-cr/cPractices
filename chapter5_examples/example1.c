#include <stdio.h>

int main()
{
  int fir, sec;
  printf("enter two integers:\n");
  scanf("%d%d", &fir, &sec);
  if (fir > sec)
    printf("first > second\n");
  else
    printf("first <= second\n");
  printf("All done!\n");
  return 0;
}
