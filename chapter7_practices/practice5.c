#include <stdio.h>
#define N 10

int main()
{
  int arr[N];
  int min = 0, max = 0;
  printf("输入10个数:\n");
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] < arr[min])  min = i;
    if (arr[i] > arr[max])  max = i;
  }
  if (min != 0)
  {
    int tempt = arr[0];
    arr[0] = arr[min];
    arr[min] = tempt;
  }
  if (max != N - 1)
  {
    int tempt = arr[N - 1];
    arr[N - 1] = arr[max];
    arr[max] = tempt;
  }
  printf("交换后的10个数为:\n");
  for (int i = 0; i < N; i++)
    printf("%d  ", arr[i]);
  printf("\n");
  return 0;
}
