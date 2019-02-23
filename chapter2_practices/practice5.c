#include <stdio.h>
#include <math.h>

int isPrime(int number)
{
  int result = 1;
  for (int j = 2; j <= sqrt(number); j++)
  {
    if (number % j == 0)
    {
      result = 0;
      break;
    }
  }
  return result;
}

int main()
{ 
  for (int i = 2; i <= 100; i++)
  {
    if (isPrime(i))
      printf("%d是素数\n", i);
  }
  return 0;
}
