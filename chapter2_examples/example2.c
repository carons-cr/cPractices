#include <stdio.h>

int main()
{
  int x, y, z;
  for (x = 0; x <= 100; x++) 
  {
    for (y = 0; y <= 100 - x; y++)
    {
      z = 100 - x - y;
      if(3 * x + 2 * y + 0.5 * z == 100)
        printf("x = %d y = %d z = %d\n", x, y, z);
    }
  }
  return 0;
}
