#include <stdio.h>

int max, count;

void calculateMaxACount(int arr[], int len)
{
  max = arr[0];
  count = 1;
  for (int i = 0; i < len; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
      count = 1;
    }
    else if (arr[i] == max)
      count++;
  }
}

int main()
{
  int arr[] = {2, 3, 12, 6, 3, 12, 7, 1, 4, 12};
  calculateMaxACount(arr, 10);
  printf("该数组的最大值是%d, 在数组中出现次数是%d\n", max, count);
  return 0;
}
