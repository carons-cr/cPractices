#include <stdio.h>
#include <math.h>
#define L 3
#define Z 2*L + 1

int main()
{
  for (int i = -L; i <= L; i++)
  {
    for (int j = 0; j < fabs(i); j++)
      printf(" ");
    for (int j = 0; j < Z - 2*fabs(i); j++)
      printf("*");
    printf("\n");
  }
  return 0;
}
