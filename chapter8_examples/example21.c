#include <stdio.h>

int main()
{
  float r = 4.5, s;
  #ifdef PI
    s = PI*r*r;
  #else
    #define PI 3.14
    s = PI*r*r;
  #endif
  printf("s = %f\n", s);
  return 0;
}
