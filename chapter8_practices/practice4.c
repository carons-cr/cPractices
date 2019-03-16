#include <stdio.h>
double paver, naver;

void saver(int arr[], int len)
{
  int psum, nsum, pcount, ncount;
  psum = nsum = pcount = ncount = 0;
  for (int i = 0; i < len; i++)
  {
    if (arr[i] > 0)
    {
      psum += arr[i];
      pcount++;
    }
    if (arr[i] < 0)
    {
      nsum += arr[i];
      ncount++;
    }
  }
  paver = 1.0*psum/pcount;
  naver = 1.0*nsum/pcount;
}

int main()
{
  int arr[10] = {0, 1, -2, 3, 2, 9, -5, -8, -10, 11};
  printf("arr为:");
  for (int i = 0; i < 10; i++)
    printf("%d  ", arr[i]);
  printf("\n");
  saver(arr, 10);
  printf("arr中正数的平均值为%.2lf, 负数的平均值为%.2lf\n", paver, naver);
  return 0;
}
