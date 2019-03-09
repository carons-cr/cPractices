#include <stdio.h>
#include <math.h>

int main()
{
  int n, i;
  double k;
  printf("Please input a number:\n");
  scanf("%d", &n);
  k = sqrt(n);
  for (i = 2; i <= k; i++)
  {
    if (n % i == 0)
    {
      printf("%d is not a prime\n", n);
      break;
    }
  }
  if (i > k)
    printf("%d is a prime\n", n);
  return 0;
}
