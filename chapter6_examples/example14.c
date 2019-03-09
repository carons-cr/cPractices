#include <stdio.h>

int main()
{
  for (int i = 1; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      for (int k = 0; k < 10; k++)
      {
        if (i == j || j == k || k == i)
          continue;
        if ((100*i + 10*j + k) % 4 == 0)
        {
          printf("%d\n", 100*i + 10*j + k);
          goto L;
        }
      }
    }
  }
  L:;
  return 0;
}
