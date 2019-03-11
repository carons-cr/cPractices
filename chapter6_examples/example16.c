#include <stdio.h>

int main()
{
  int n = 0;
  for (int c = 1; c <= 20; c++)
  {
    for (int b = 1; b < c; b++)
    {
      for (int a = 1; a <= b; a++)
      { 
        if (a*a + b*b == c*c)
          printf("(%d, %d, %d)\n", a, b, c);
      }
    }
  }
  return 0;
}
