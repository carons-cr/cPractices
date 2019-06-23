#include <stdio.h>

int *search(int (*p1)[4], int n)
{
  int  *p2;
  p2 = *(p1 + n);
  return p2;
}

int main()
{
  int i, number, *p, s = 0;
  int student[][4] = {{78, 68, 75, 90}, {64, 95, 83, 72}, {97, 86, 82, 87}, {85, 80, 71, 65}, {90, 60, 85, 90}, {80, 87, 63, 95}, {61, 93, 90, 75}, {76, 93, 82, 64}, {65, 69, 87, 73}};
  printf("Enter the number of student: \n");
  scanf("%d",&number);
  p = search(student, number);
  printf("The scores are : \n");
  for (i = 0; i < 4; i++)
  {
    printf("%4d", *(p + i));
    s = s  + *(p + i);
  }
  printf("\nThe average is : %f\n", s/4.0);
  return 0;
}
