#include <stdio.h>

int main()
{
  char arr[11];
  scanf("%[^\n]", arr);
  for (int i = 0; arr[i] != '\0'; i++)
  {
    if (i >= 6)
      arr[i] = '#';
  }
  printf("%s\n", arr);
  return 0;
}
