#include <stdio.h>

double count(int n)
{
  double sum = 0;
  for (int i = 1; i <= n; i++)
    sum += 1.0/i;
  return sum;
}

int main()
{
  double sum;
  sum = count(50) + count(100) + count(150) + count(200);
  printf("sum = %8.2lf\n", sum);
  return 0;
}
