#include <stdio.h>
#include <string.h>

int main()
{
  char *arr;
  scanf("%[^\n]", arr);
  int len = strlen(arr);
  char *p = arr;
  for (len--; len >= 0; len--)
  {
    printf("len: %d\n", len);
    if (*(p + len) != ' ')
    {
      *(p + len + 1) = '\0';
      break;  
    }
  }
  printf("%s\n", p); 
  return 0;
}
