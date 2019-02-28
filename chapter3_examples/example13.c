#include <stdio.h>

int main()
{
  unsigned int A = 0xb3, B = 0x9a;
  printf("~A = %x\n", ~A);
  printf("A&B = %x\n", A&B);
  printf("A|B = %x\n", A|B);
  printf("A^B = %x\n", A^B);
  A = 27;
  B = 28;
  printf("A<<1 = %u\n", A<<1);
  printf("B>>1 = %u\n", B>>1);
  return 0;
}
