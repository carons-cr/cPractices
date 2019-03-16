#include <stdio.h>
long getCombinationNum(long, long);
long getFactory(long);

int main()
{
  long m, n, c;
  printf("Please enter m and n:\n");
  scanf("%ld%ld", &m, &n);
  c = getCombinationNum(m, n);
  printf("C(%ld, %ld) = %ld\n", m, n, c);
  return 0;
}

long getCombinationNum(long m, long n)
{
  long c;
  c = getFactory(m)/(getFactory(n)*getFactory(m - n));
  return c;
}

long getFactory(long n)
{
  long factory = 1;
  for (int i = 1; i <= n; i++)
    factory *= i;
  return factory;
}
