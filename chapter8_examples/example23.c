#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      return 0;
  return 1;
}

int main()
{
  int n;
  while (1)
  {
    printf("Please input a number n >= 6:\n");
    scanf("%d", &n);
    if (n > 6)
      break;
  }
  for (int even = 6; even <= n; even += 2)
  {
    for (int i = 3; i <= even/2; i += 2)
    {
      if (isPrime(i))
      {
        int j = even - i;
        if (isPrime(j))
        {
          printf("%d = %d + %d\n", even, i, j);
          break;
        } 
      }
    } 
  }
  return 0;
}
