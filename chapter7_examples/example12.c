#include <stdio.h>
#define N 2

int main()
{
  int upp, low, dig, spa, oth;
  char ch[N][81];
  upp = low = dig = spa = oth = 0;
  for (int i = 0; i < N; i++)
  {
    printf("Please input line %d:\n", i);
    scanf("%[^\n]", ch[i]);
    getchar();
    for (int j = 0; j < 80 && ch[i][j] != '\0'; j++)
    {
      if (ch[i][j] >= 'A' && ch[i][j] <= 'Z') upp++;
      else if (ch[i][j] >= 'a' && ch[i][j] <= 'z')  low++;
      else if (ch[i][j] >= '0' && ch[i][j] <= '9')  dig++;
      else if (ch[i][j] == ' ')  spa++;
      else  oth++;
    }
  }
  for (int i = 0; i < N; i++)
    printf("%s\n", ch[i]);
  printf("upp : %d\n", upp);
  printf("low : %d\n", low);
  printf("dig : %d\n", dig);
  printf("spa : %d\n", spa);
  printf("oth : %d\n", oth);
  return 0;
}
