#include <stdio.h>

void sort(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    int min = i;
    for (int j = i + 1; j < len; j++)
      min = arr[j] < arr[min] ? j : min;
    if (min != i)
    {
      int tempt = arr[i];
      arr[i] = arr[min];
      arr[min] = tempt;
    }
  }
}

int main()
{
  int arr[10];
  printf("enter 10 integers: \n");
  for (int i = 0; i < 10; i++)
    scanf("%d", &arr[i]);
  sort(arr, 10);
  printf("the sorted array:\n");
  for (int i = 0; i < 10; i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}
