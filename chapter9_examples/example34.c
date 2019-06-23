#include <stdio.h>

int *min(int *b, int n)
{
  int *p, *r;
  p = b + 1;
  r = b + n;
  for (; p < r; p++)
    if (*p < *b)
      b = p;
  return b;
}

void sort(int *a, int n)
{
  int *p, x;
  for (; n > 1; n--, a++)
  {
    p = min(a, n);
    x = *a;
    *a = *p;
    *p = x;
  }
}

int main()
{
  int i = 0, k[] = {32, 24, 15, 63, 85, 70, 41, 96, 51, 10};
  sort(k, 10);
  while(i < 10)
  {
    printf("%3d", k[i]);
    i++;
  }
  printf("\n");
  return 0;
}
