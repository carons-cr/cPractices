#include <stdio.h>

int getSum(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
    sum += i;
  return sum;
}

int getMaxOdd(int n)
{
  int maxOdd, sum;
  sum = getSum(n);
  maxOdd = 2*sum - 1;
  return maxOdd;
}

int main()
{
  int n, maxOdd;
  printf("Please enter a number:\n");
  scanf("%d", &n);
  maxOdd = getMaxOdd(n);
  printf("the cube of %d is the sum of these odds:\n", n);
  for (int i = 0; i < n; i++)
  {
    printf("%d  ", maxOdd);
    maxOdd -= 2;
  }
  printf("\n");
  return 0;
}
