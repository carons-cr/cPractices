#include <stdio.h>

void swap(int arr[])
{
  int tempt = arr[0];
  arr[0] = arr[1];
  arr[1] = tempt;
}

int main()
{
  void swap();
  int b[2] = {10, 2};
  swap(b);
  printf("b[0] = %d, b[1] = %d\n", b[0], b[1]);
  return 0;
}
