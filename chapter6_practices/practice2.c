#include <stdio.h>

int isPerfectNum(int num)
{
  int sum = 0, result = 0;
  
  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)  sum += i;
  }
  if (sum == num)  result = 1;
  return result;
}

int main()
{
  int n;
  printf("请输入一个正整数:\n");
  scanf("%d", &n);
  printf("其内包括的完全数有:");
  for (int i = 1; i <= n; i++)
  {
    if (isPerfectNum(i))  printf("%d\t", i);
  }
  printf("\n");
  return 0;
}
