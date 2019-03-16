#include <stdio.h>

void search(int num, int arr[], int len)
{
  int i = 0;
  while (i < len)
  {
    if (num == arr[i])
    {
      printf("%d is in arr, index is %d\n", num, i);
      break;
    }
    i++;
  }
  if (i >= len)
    printf("%d is not in arr\n", num);
}

int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int num;
  printf("there is an arr:");
  for (int i = 0; i < 10; i++)
    printf("%d  ", arr[i]);
  printf("\n");
 
  printf("input a number\n");
  scanf("%d", &num);
  search(num, arr, 10);
  return 0;
}
