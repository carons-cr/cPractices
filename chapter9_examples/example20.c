#include <stdio.h>

char *month_name(int n)
{
  char *name[] = {"Illegal Month", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  return (n < 1 || n > 12) ? name[0] : name[n];
}

int main()
{
  int n;
  scanf("%d", &n);
  printf("%d month name is %s\n", n, month_name(n));       
  return 0;
}

