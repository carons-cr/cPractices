#include <stdio.h>

void swap(int *qa, int *qb)
{
  int tempt;
  tempt = *qa;
  *qa = *qb;
  *qb = tempt;
}

int main()
{
  int a, b;
  int *pa = &a, *pb = &b;
  printf("请输入两个数:\n");
  scanf("%d%d", pa, pb);
  printf("%d, %d\n", a, b);
  swap(pa, pb);
  printf("%d, %d\n", a, b);
  return 0;
}
