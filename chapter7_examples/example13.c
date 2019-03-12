#include <stdio.h>

int main()
{
  char str1[20], str2[20];
  int i;
  printf("请输入第一个字符串:\n");
  scanf("%[^\n]", str1);
  getchar();
  printf("请输入第二个字符串:\n");
  scanf("%[^\n]", str2);
  
  printf("str1 : %s\n", str1);
  printf("str2 : %s\n", str2);
  
  for (i = 0; str1[i] != '\0'; i++);
  for (int j = 0; str2[j] != '\0'; j++)
    str1[i++] = str2[j];
  str1[i] = '\0';
  printf("连接后的字符串:%s\n", str1);
  return 0;
}
