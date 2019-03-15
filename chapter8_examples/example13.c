#include <stdio.h>
#include <stdlib.h>

long getFactory(int n)
{
  long factory;
  if (n < 0)
  {
    printf("Data error!\n");
    exit(0);
  }
  else if (n == 0 || n == 1)  factory = 1;
  else  factory = n*getFactory(n - 1);
  return factory;
}

int main()
{
  int n;
  long factory;
  printf("Please enter an integer number:\n");
  scanf("%d", &n);
  factory = getFactory(n);
  printf("%d! = %ld\n", n, factory);
  return 0;
}
