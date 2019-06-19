#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 1;
  printf("argc = %d\n", argc);
  printf("argv = ");
  while(i < argc)
  {
    printf("%s ", argv[i]);
    i++;
  }
  printf("\n");
  return 0;
}
