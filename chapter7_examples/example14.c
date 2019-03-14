#include <stdio.h>
#include <string.h>

int main()
{
  char str1[80], min[80];
  int len;
  printf("输入若干字符串，以#为结束标志:\n");
  scanf("%[^\n]%*c", str1);
  strcpy(min, str1);
  len = strlen(min);

  scanf("%[^\n]%*c", str1);
  while (str1[0] != '#')
  {
    if (strlen(str1) < len)
    {
      strcpy(min, str1);
      len = strlen(min);
    }
    scanf("%[^\n]%*c", str1);
  }
  printf("len = %d, min = %s\n", len, min);
  return 0;
}
