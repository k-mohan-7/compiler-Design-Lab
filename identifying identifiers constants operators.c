#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
  int n, l, k = 0, i, j = 0, m = 0;
  char p[100], id[10]=" ", con[10]=" ", op[10]=" ";
  printf("enter txt");
  scanf("%s", p);
  l = strlen(p);
  for (i = 0; i < l; i++)
  {
    if (isalpha(p[i]))
    {
      id[j] = p[i];
      j++;
    }
    if (isdigit(p[i]))
    {
      con[k]=p[i];
      k++;
    }
    if (p[i] == '=' || p[i] == '+' || p[i] == '/' || p[i] == '-' || p[i] == '*')
    {
      op[m] = p[i];
      m++;
    }
    else
    {
      printf("you had enterd wrong character");
    }
  }
  printf("\nIdentifiers: %s\n");

  for (i = 0; i < j; i++)
  {
    printf("%c ", id[i]);
  }

  printf("\nConstants: \n");

  for (i = 0; i < k; i++)
  {
    printf("%c", con[i]);
  }

  printf("\nOperators:\n");
  for (i = 0; i < m; i++)
  {
    printf("%c ", op[i]);
  }
}
