#include <stdio.h>

int main()
{
  char str[100];
  int len, i;
  printf("输入字符串:\n");
  scanf("%[^\n]%*c", str);
  for (int j = 0; str[j] != '\0'; j++)
    len++;
  printf("len:%d\n", len);
  for (i = 0; i < len/2; i++)
    if (str[i] != str[len - 1 - i])
      break;
  i >= len/2 ? printf("该字符串是回文\n") : printf("该字符串不是回文\n");
  return 0;
}
