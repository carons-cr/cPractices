#include <stdio.h>

double count(int n)
{
  double sum = 0;
  if (n <= 0)
  {
    printf("Data error!\n");
    return 0;
  }
  for (int i = 1; i <= n; i++)
    sum += 1.0/i;
  return sum;
}

int main()
{
  int n;
  double sum;
  printf("Please input n:\n");
  scanf("%d", &n);
  sum = count(n);
  printf("sum = %6.2lf\n", sum);
  return 0;
}

