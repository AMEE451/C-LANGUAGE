#include <stdio.h>
#include <string.h>
int main()
{
  char n[10], n1[20];

  printf("ENter N :");
  scanf("%[^\n]", &n);
  int upper = 0, lower = 0;
  for (int i = 0; n[i] != '\0'; i++)
  {
    if (n[i - 1] == 0)
    {
      printf("%s", strupr(n[i]));
    }
    else
    {
      printf("%s", strlwr(n[i]));
    }
  }
}
