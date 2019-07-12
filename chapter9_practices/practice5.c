#include <stdio.h>

int main()
{
  int numarr[10], *nums = numarr, min, max, t1, t2;
  printf("enter 10 nums: \n");
  for (int i = 0; i < 10; i++)
    scanf("%d", nums + i);
  min = nums[0], max = nums[9];
  for (int i = 0; i < 10; i++)
  {
    if (nums[i] < min)
    {
      min = nums[i];
      t1 = i;
    }
    if (nums[i] > max)
    {
      max = nums[i];
      t2 = i;
    }
  }
  nums[t1] = nums[0];
  nums[0] = min;
  nums[t2] = nums[9];
  nums[9] = max;
  for (int i = 0; i < 10; i++)
    printf("%d\t", nums[i]);
  printf("\n"); 
  return 0;
}
