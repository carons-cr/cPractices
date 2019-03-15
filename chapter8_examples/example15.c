#include <stdio.h>

int main()
{
  int k = 1, m = 4;
  m += k;
  k += m;
  {
    char k = 'B';
    printf("%d, ", k - 'A');
  }
  printf("%d, %d\n", m, k);
  return 0;
}
