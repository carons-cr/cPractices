#include <stdio.h>

int main()
{
  int x, a, b, c, d, e;
  for (x = 50; x <= 1000; x++)
  {
    d = 129*x/721;
    if (1.0*129*x/721 - d < 1e-5)
    {
      e = x - 5*d;
      a = x - 6*e;
      b = x - 2*a;
      c = x - 3*b;
      break;
    }
  }
  printf("X = %d, A = %d, B = %d, C = %d, D = %d, E = %d\n", x, a, b, c, d, e);
  return 0;
} 
