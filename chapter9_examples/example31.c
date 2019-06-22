#include <stdio.h>
#include <string.h>

void sort(char *name[], int n)
{
  char *temp;
  int i, j, k;
  for (i = 0; i < n - 1; i++)
  {
    k = i;
    for (j = i + 1; j < n; j++)
      if (strcmp(name[k], name[j]) > 0)
        k = j;
      if (k != i)
      {
        temp = name[i];
        name[i] = name[k];
        name[k] = temp;
      }
  }
}

int main()
{
  int n = 10, i;
  char *name[] = {"China", "American", "France", "Britain", "Canada", "Australia", "Switzerland", "Japan", "Italy", "Germany"};
   sort(name, n);
   for (i = 0; i < n; i++)
     printf("%s; ", name[i]);
   printf("\n");
  return 0;
}
