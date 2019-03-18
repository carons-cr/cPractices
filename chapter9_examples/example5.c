#include <stdio.h>

int main()
{
  char s1[20], s2[20];
  char *p1 = s1, *p2 = s2;
  printf("请输入字符串:\n");
  scanf("%[^\n]", s1);
  for (; *p1 != '\0'; p1++, p2++)
    *p2 = *p1;
  *p2 = '\0';
  printf("%s\n", s2);
  return 0;
}
