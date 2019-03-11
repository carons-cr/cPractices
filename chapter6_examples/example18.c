#include <stdio.h>

int main()
{
  float sum = 0, m = 1, n = 2;
  for (int i = 0; i < 10; i++)
  {
    sum += m/n;
    int k = m + n;
    m = n;
    n = k;
  }
  printf("sum = %f\n", sum);
  return 0;
}
