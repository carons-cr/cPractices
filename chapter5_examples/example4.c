#include <stdio.h>

int main()
{
  int a = 10;
  switch(a)
  {
    case 10:
    case 9: a++;
    case 8: 
    case 7: a+=2;break;
    case 6: a+=3;
    default: a+=4;
  }
  printf("a = %d\n", a);
  return 0;
}
