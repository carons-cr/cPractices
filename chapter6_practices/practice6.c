#include <stdio.h>

int main()
{
  int x, y, z;
  for (x = 0; x <= 100; x++)
  {
    for (y = 0; y <= 100 - x; y++)
    {
      z = 100 - x - y;
      if ((z + 0.0)/3 - z/3 < 1e-5 && 5*x + 3*y + z/3 == 100)  
        printf("可以公鸡%d只, 母鸡%d只, 小鸡%d只\n", x, y, z);
    }
  }
  return 0;
}
