#include <stdio.h>
#include <string.h>

int main()
{
  char str1[80], min[80];
  int len;
  printf("Input str1:\n");
  scanf("%[^\n]", str1);
  strcpy(min, str1);
  len = strlen(min);

  printf("Input str1:\n");
  getchar();
  scanf("%[^\n]", str1);
  while (str1[0] != '0')
  {
    if (strlen(str1) < len)
    {
      strcpy(min, str1);
      len = strlen(min);
    }
    getchar();
    scanf("%[^\n]", str1);
  }
  printf("len = %d, min = %s\n", len, min);
  return 0;
}
