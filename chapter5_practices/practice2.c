#include <stdio.h>

int main()
{
  char ch;
  printf("请输入一个大写字母：\n");
  scanf("%c", &ch);
  if (ch == 'A')
    printf("%c没有前面的字母。\n", ch);
  else if (ch == 'Z')
    printf("%c没有后面的字母。\n", ch);
  else if (ch > 'A' && ch < 'Z')
    printf("%c前面的字母为%c, 后面的字母为%c。\n", ch , ch - 1, ch + 1);
  else 
    printf("输入错误， 请输入大写字母！\n");
  return 0;
}
