#include <stdio.h>

int main()
{
  int a[3][4] = {{1, 9, 7, 6}, {4, 6, 0, 5}, {8, 7, 8, 2}};
  int hasPoint = 0, max, jindex, itempt;
  for (int i = 0; i < 3; i++)
  {
    max = a[i][0];
    for (int j = 0; j < 4; j++)
      if (a[i][j] > max)
      {
        max = a[i][j];
        jindex = j;
      }  
    for (itempt = 0; itempt < 3; itempt++)
      if (a[itempt][jindex] < max)
        break;
    if (itempt >= 3)
    {
      printf("鞍点在第%d行第%d列, 鞍点为%d\n", i, jindex, a[i][jindex]);
      hasPoint = 1;
    }
  }
  if (!hasPoint)  
    printf("无鞍点!\n ");
  return 0;
}
