#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, n, sum = 0, *p;
  scanf("%d", &n);
  p = (int *)malloc(n*sizeof(int));
  for (i = 0; i < n; i++)
  {
    scanf("%d", &p[i]);
    sum += p[i];
  }
  free(p);
  printf("sum = %d\n", sum);
  return 0;
}
