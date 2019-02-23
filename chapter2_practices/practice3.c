#include <stdio.h>

int main()
{
  int n;
  printf("输入n:\n");
  scanf("%d", &n);
  if (n % 3 == 0 && n % 5 == 0)
    printf("%d能被3和5整除\n", n);
  else 
    printf("%d不能被3和5整除\n", n);
  return 0;
}
