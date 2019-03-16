#include <stdio.h>

void printMaxAMin(int arr[], int len)
{
  int max, min;
  max = min = arr[0];
  for (int i = 0; i < len; i++)
  {
    if (arr[i] > max)  max = arr[i];
    if (arr[i] < min)  min = arr[i];
  }
  printf("max = %d, min = %d\n", max, min);
}

int main()
{
  int arr[10];
  printf("Please input 10 numbers make up an array:\n");
  for (int i = 0; i < 10; i++)
    scanf("%d", &arr[i]);
  printMaxAMin(arr, 10);
  return 0;
}
