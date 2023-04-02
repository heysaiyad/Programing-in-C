// Write a program in C to read a string through a keyboard and sort it using bubble
#include <stdio.h>
#include <string.h>
void main()
{
  char name[25][50], temp[25];
  int n, i, j;

  printf("Input number of strings :");
  scanf("%d", &n);

  printf("Input string %d :\n", n);
  for (i = 0; i <= n; i++)
  {

    fgets(name[i], sizeof name, stdin);
  }
  /*Logic Bubble Sort*/

  for (i = 1; i <= n; i++)
    for (j = 0; j <= n - i; j++)
      if (strcmp(name[j], name[j + 1]) > 0)
      {
        strcpy(temp, name[j]);
        strcpy(name[j], name[j + 1]);
        strcpy(name[j + 1], temp);
      }
  printf("The strings appears after sorting :\n");
  for (i = 0; i <= n; i++)
    printf("%s\n", name[i]);
}
